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
