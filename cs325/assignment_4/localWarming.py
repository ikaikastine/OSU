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