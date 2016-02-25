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

def usage():
    print 'Usage: python algorithm.py --test [option #]'
    print 'Options:'
    options = ['1 - test_cases_with_solutions', '2 - test_cases_without_solutions']
    print '\n'.join(map(lambda x:'\t'+ x, options))
    sys.exit()

def compute(suffix, prefix):
    originalCombinedArray = [0] * len(testArray)
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
    for i in range(0, len(combinedArray)):
        originalCombinedArray[i] = combinedArray[i]
    combinedArray.sort()
    #print '\nsorted combinedArray: ', combinedArray

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
            #print '\ninitVal: ', initVal
            #print 'secondVal: ', secondVal
            #print 'tempSum: ', tempSum
            #print 'arrSum: ', arrSum

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
    #print 'startval: ', startVal
    #print 'finishVal: ', finishVal
    for i in range (0, len(originalCombinedArray)):
        if startVal == originalCombinedArray[i]:
            start = i  
    for j in range (0, len(originalCombinedArray)):
        if finishVal == originalCombinedArray[j]:
            finish = j
    return minSum, start, finish

if __name__ == '__main__':
    if not len(sys.argv) > 2:
        print 'No option specified.'
        usage()
    if len(sys.argv) == 3:
        arg = sys.argv[2]
        if arg == '1':
            for i in range(10):
                testArray = loadFromFile('test_cases_with_solutions.txt', i)
                suffix, prefix = splitArray(testArray)
                suffix = suffixSum(suffix)
                prefix = prefixSum(prefix)

                minSum, start, finish = compute(suffix, prefix)
                print minSum, start, finish
                print
        elif arg == '2':
            for i in range(10):
                testArray = loadFromFile('test_cases_without_solutions.txt', i)
                suffix, prefix = splitArray(testArray)
                suffix = suffixSum(suffix)
                prefix = prefixSum(prefix)

                minSum, start, finish = compute(suffix, prefix)
                print minSum, start, finish
                print
        else:
            usage()