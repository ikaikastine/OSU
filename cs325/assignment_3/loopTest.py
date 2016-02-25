import sys

def maxSubArray(testArray):
    if len(testArray) == 0:
       raise Exception("Array empty") # should be non-empty
      
    currentSum = bestSum = testArray[0]
    minSum = 0
    i = 0
    start = finish = 0

    for j in range(1, len(testArray)):
        curVal = testArray[j]
        if (curVal) > (minSum - testArray[j]):
            currentSum = testArray[j]
            i = j
        else:
            currentSum += testArray[j]

        #if bestSum < currentSum:
        if currentSum < bestSum:
            bestSum = (currentSum)
            
            start = i
            finish = j

    print "bestSum =>", bestSum
    print "start =>", start, "; finish =>", finish

maxSubArray([-2, 70, -4, 13, -5, 2])
maxSubArray([-15, 29, -36, 3, -22, 11, -112, -5])

