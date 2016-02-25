import sys

def maxSubArray(ls):
    if len(ls) == 0:
       raise Exception("Array empty") # should be non-empty
      
    runSum = maxSum = ls[0]
    minSum = sys.maxint
    i = 0
    start = finish = 0

    for j in range(1, len(ls)):
        curVal = ls[j]
        if abs(curVal) > (minSum - ls[j]):
            runSum = ls[j]
            i = j
        else:
            runSum += ls[j]

        if runSum < maxSum:
            maxSum = runSum
            start = i
            finish = j

    print "maxSum =>", maxSum
    print "start =>", start, "; finish =>", finish

maxSubArray([-2, 70, -4, 13, -5, 2])
maxSubArray([-15, 29, -36, 3, -22, 11, -112, -5])

