import sys

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

for i in range(10):
    testArray = loadFromFile('test_cases_with_solutions.txt', i)
    #print 'initial array: ', testArray
    suffix, prefix = splitArray(testArray)
    suffix = suffixSum(suffix)
    prefix = prefixSum(prefix)
    #print 'before negative'
    #print 'suffix: ', suffix
    #print 'prefix: ', prefix

    #Take negative of prefix
    for i in range(0, len(prefix)):
        prefix[i] = -(prefix[i])
    #print 'after negative'
    #print 'suffix: ', suffix
    #print 'prefix: ', prefix

    #Combine first list with negative of second
    combinedArray = suffix + prefix

    #print 'combinedArray: ', combinedArray
    combinedArray.sort()
    #print '\nsorted combinedArray: ', combinedArray

    minSum = sys.maxint
    start = finish = 0
    arrSum = tempSum = 0
    smallestVal = min(i for i in combinedArray if i > 0)

    for i in range(0, len(combinedArray) - 1):
        for j in range (i+1, len(combinedArray) - 1):
            tempSum = arrSum
            initVal = combinedArray[j]
            secondVal = combinedArray[i]
            if secondVal < 0:
                arrSum = abs(initVal) - abs(secondVal)
            else:
                arrSum = abs(initVal) - abs(secondVal)
            #print '\ninitVal: ', initVal
            #print 'secondVal: ', secondVal
            #print 'tempSum: ', tempSum
            #print 'arrSum: ', arrSum

            if  abs(arrSum) < minSum:
                minSum = abs(arrSum)
                #initVal = combinedArray[i+2]
                start = i
                finish = j
            else:
                arrSum = tempSum

            if smallestVal < minSum:
                minSum = smallestVal
    print minSum, start, finish
    print