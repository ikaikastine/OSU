import csv, random, sys, timeit, time

#Basic max sub array implemetation 
def enumeration(array):
	start = time.time()
	maxSum = 0
	for i in range(len(array)):
		for j in range(i, len(array)):
			newSum = sum(array[i:j+1])
			if newSum > maxSum:
				maxSum = newSum
	stop = time.time()
	#print "Enumeration =", maxSum
	print "Enumeration time =", (stop - start) 
	return maxSum

#Better max sub array implementation
def betterEnumeration(array):
	start = time.time()
	maxSum = 0
	for i in range(len(array)):
		oldSum = 0
		for j in range(i, len(array)):
			if j == 0:
				newSum = array[i]
			else:
				newSum = oldSum + array[j]
			if newSum > maxSum:
				maxSum = newSum
			oldSum = newSum
	stop = time.time()
	print "Better enumeration time =", (stop - start) 
	#print "Better enumeration =", maxSum
	return maxSum

def dynamicProgramming(array):
	start = time.time()
	best = cur = 0
	for i in array:
		cur = max(cur + i, 0)
		best = max(best, cur)
	stop = time.time()
	print "Dynamic programming =", (stop - start) 
	#print "Dynamic programming =", best
	return best

def testRunTime(testCase):
	for i in range(1, 18):
		testArray = [random.randint(-100, 100) for r in range(i*100)]
		#print testArray
		if testCase == 'enumeration':
			enumeration(testArray)
		elif testCase == 'betterEnumeration':
			betterEnumeration(testArray)
		elif testCase == 'dynamicProgramming':
			dynamicProgramming(testArray)


testRunTime('enumeration')
testRunTime('betterEnumeration')
testRunTime('dynamicProgramming')