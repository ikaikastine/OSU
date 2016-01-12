import csv, random, sys, timeit, time

#Algorithm 1: Enumeration 
def enumeration(array):
	start = time.time()
	maxSum = 0
	for i in range(len(array)):
		for j in range(i, len(array)):
			newSum = sum(array[i:j+1])
			if newSum > maxSum:
				maxSum = newSum
	stop = time.time()
	print (stop - start)
	return maxSum

#Algorithm 2: Better enumeration
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
	print (stop - start)
	return maxSum

#Algorithm 3: Dynamic programming
def dynamicProgramming(array):
	start = time.time()
	best = cur = 0
	for i in array:
		cur = max(cur + i, 0)
		best = max(best, cur)
	stop = time.time()
	print (stop - start)
	return best

def testRunTime(testCase):
	for i in range(1, 19):
		testArray = [random.randint(-100, 100) for r in range(i*100)]
		#print testArray
		if testCase == 'enumeration':
			enumeration(testArray)
		elif testCase == 'betterEnumeration':
			betterEnumeration(testArray)
		elif testCase == 'dynamicProgramming':
			dynamicProgramming(testArray)

#BEGIN TEST CASES#
print "***ENUMERATION***"
testRunTime('enumeration')

print "***BETTER ENUMERATION***"
testRunTime('betterEnumeration')

print "***DYMANIC PROGRAMMING***"
testRunTime('dynamicProgramming')
#END TEST CASES#