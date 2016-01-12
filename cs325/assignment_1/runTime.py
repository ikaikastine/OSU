import csv, random, sys, timeit

#Basic max sub array implemetation 
def enumeration(array):
	start = timeit.default_timer()
	maxSum = 0
	for i in range(len(array)):
		for j in range(i, len(array)):
			newSum = sum(array[i:j+1])
			if newSum > maxSum:
				maxSum = newSum
	stop = timeit.default_timer()
	print "Enumeration =", maxSum
	print "Enumeration time =", stop - start
	return maxSum

#Better max sub array implementation
def betterEnumeration(array):
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
	print "Better enumeration =", maxSum
	return maxSum

def dynamicProgramming(array):
	best = cur = 0
	for i in array:
		cur = max(cur + i, 0)
		best = max(best, cur)
	print "Dynamic programming =", best
	return best

def testRunTime():
	for i in range(0, 10):
		testArray = [random.randint(-100,100) for r in range(100)]
	print testArray
	enumeration(testArray)
	
#Call basic enumeration implementation
enumeration([31, -41, 59, 26, -53, 58, 97, -93, -23, 84])

#Call better enumeration implementation
betterEnumeration([31, -41, 59, 26, -53, 58, 97, -93, -23, 84])

#Call dynamic programming implementation 
dynamicProgramming([31, -41, 59, 26, -53, 58, 97, -93, -23, 84])

testRunTime()
