from pulp import *
import matplotlib.pyplot as plt
import numpy as np
import math
import csv

#Use for days
d = []

#Use for average temps
T = []

with open('Corvallis_data.csv', 'rb') as f:
	reader = csv.reader(f, delimeter=';')
	for row in reader:
		average = row[7].strip()
		if(not average.isalpha()):
			T.append(float(average))
		day = row[8].strip()
		if(not day.isalpha()):
			d.append(float(day))

n = len(d)

#Initialize linear programming problem
lprob = LpProblem("Best Fit Line Problem", LpMinimize)

#Set decision variables
Z = LpVariable("Z", 0)
x0 = LpVariable("x0", 0)
x1 = LpVariable("x1", 0)
x2 = LpVariable("x2", 0)
x3 = LpVariable("x3", 0)
x4 = LpVariable("x4", 0)
x5 = LpVariable("x5", 0)

linear = 0
seasonal = 0
solar = 0

#What we want to minimize
lprob += Z

#Get the max deviation
for i in range(0, n):
	linear = (x0 + x1 * d[i])
	seasonal = (x2 * math.cos(2*math.pi * d[i]/364.25) + x3 * math.sin(2*math.pi * d[i]/364.25))
	solar = (x4 * math.cos(2*math.pi * d[i]/(364.25*10.7)) + x5 * math.sin(2*math.pi * d[i]/(364.25*10.7)))
	lprob += Z >= (linear + seasonal + solar - T[i])
	lprob += Z >= -(linear + seasonal + solar - T[i])

status = lprob.solve()

print("Objective: " + str(value(lprob.objective)))
print("x0: " + str(value(x0)))
print("x1: " + str(value(x1)))
print("x2: " + str(value(x2)))
print("x3: " + str(value(x3)))
print("x4: " + str(value(x4)))
print("x5: " + str(value(x5)))

#Calculate best fit
m, b = np.polyfit(np.array(d), np.array(T), 1)

#Create graph
fig = plt.figure()
ax1 = fig.add_subplot(111)

#Set title
ax1.set_title("Corvallis Data")

ax1.set_xlabel('Day')
ax1.set_ylabel('Average Temp')

#Raw data
ax1.plot(d, T, c='r', label='Raw Data')

#Best Fit
ax1.plot(np.array(d), np.array(m)*np.array(d) + np.array(b), 'b-', label='Best Fit')

leg = ax1.legend()
plt.show()