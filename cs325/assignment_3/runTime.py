import sys, timeit, time

def suffixSum(suffix):
    arrSum = 0
    sumOfSuffix = [0] * len(suffix) 
    for i in range (len(suffix)):
        for j in range(i, len(suffix)):
            arrSum += suffix[j]
        sumOfSuffix[i] = arrSum
        arrSum = 0
    return sumOfSuffix

def prefixSum(prefix):
    arrSum = 0
    sumOfPrefix = [0] * len(prefix)
    for i in range (len(prefix)):
        arrSum += prefix[i]
        sumOfPrefix[i] = arrSum
    return sumOfPrefix

def splitArray(list):
    half = len(list)/2
    return list[:half], list[half:]

def loadFromFile(filename, index):
    f = open(filename, 'r')
    if index > 9:
        print 'Index: out of bounds'
        return

    for i in range(index):
            for i in range(1):
                trash = f.readline()
    inputArray = f.readline() #Trash newline
    myArray = [int(numStr) for numStr in inputArray.split(' ')]
    return myArray

def compute(suffix, prefix):
    start = time.time()
    originalCombinedArray = [0] * len(testArray)
    for i in range(0, len(prefix)):
        prefix[i] = -(prefix[i])
    #Combine first list with negative of second
    combinedArray = suffix + prefix
    for i in range(0, len(combinedArray)):
        originalCombinedArray[i] = combinedArray[i]
    combinedArray.sort()
    minSum = sys.maxint
    start = finish = 0
    arrSum = tempSum = 0
    smallestVal = min(i for i in combinedArray if i > 0)
    for i in range(0, len(combinedArray)):
        for j in range (i+1, len(combinedArray)):
            tempSum = arrSum
            initVal = combinedArray[j]
            secondVal = combinedArray[i]

            if secondVal < 0:
                if initVal > 0:
                   arrSum = abs(initVal) - (secondVal) 
                else:
                    arrSum = abs(initVal) - abs(secondVal)
            else:
                arrSum = abs(initVal) - abs(secondVal)
            if  abs(arrSum) < minSum:
                minSum = abs(arrSum)
                start = i
                startVal = secondVal
                finish = j
                finishVal = initVal
            else:
                arrSum = tempSum
            if smallestVal < minSum:
                minSum = smallestVal
    #Check for start and finish values
    for i in range (0, len(originalCombinedArray)):
        if startVal == originalCombinedArray[i]:
            start = i  
    for j in range (0, len(originalCombinedArray)):
        if finishVal == originalCombinedArray[j]:
            finish = j
    stop = time.time()
    runTime = (stop - start)
    return runTime

def testRunTime(testCase):
    if testCase == 'with_solutions':
        runTime = 0
        sumTime = 0
        for i in range(10):
            testArray = [31, -41, 59, 26, -53, 58, -6, 97, -93, -23]
            suffix, prefix = splitArray(testArray)
            suffix = suffixSum(suffix)
            prefix = prefixSum(prefix)
            runTime = compute(suffix, prefix)
            #sumTime = sumTime + runTime
            finalTime = (runTime / 10)
            print finalTime
    elif testCase == 'betterEnumeration':
        runTime = 0
        sumTime = 0
        for i in range(1, 11):
            runTime = betterEnumeration(testArray)
            sumTime = sumTime + runTime
        finalTime = (sumTime / 10)
        print finalTime
testArray = []
testRunTime('with_solutions')