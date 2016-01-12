import csv, random, sys

def enumeration(array):
	maxSum = 0
	for i in range(len(array)):
		for j in range(i, len(array)):
			newSum = sum(array[i:j+1])
			if newSum > maxSum:
				maxSum = newSum
	print "Enumeration =", maxSum
	return maxSum

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

def brute_max_subarray(array):
	maximum = 0
	for i in range(0, len(array)):
		current = 0
		for j in range(i, len(array)):
			current += array[j]
			if current > maximum:
				maximum = current
	print maximum
	return maximum
brute_max_subarray([31, -41, 59, 26, -53, 58, 97, -93, -23, 84])
enumeration([31, -41, 59, 26, -53, 58, 97, -93, -23, 84])
betterEnumeration([31, -41, 59, 26, -53, 58, 97, -93, -23, 84])
