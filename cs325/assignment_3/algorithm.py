import sys

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

def splitArray(list):
    half = len(list)/2
    return list[:half], list[half:]

def compute(suffix, prefix):
    minSum = sys.maxint
    suffixLen = len(suffix)
    prefixLen = len(prefix)
    print 'suffixLen = ', suffixLen
    print 'prefixLen = ', prefixLen
    fullList = suffix + prefix
    fullList.sort()
    #print 'full list: ', fullList

    for i in range(0, len(fullList)):
        for j in range(i+1, len(fullList)):
            initLoop = fullList[i]
            secondLoop = fullList[j]
            arraySum = (initLoop) + (secondLoop)
            
            print '\ninitLoop: ', initLoop
            print 'secondLoop: ', secondLoop
            print 'arraySum: ', arraySum
            print 'minSum: ', minSum
            if (abs(arraySum) < abs(minSum)):
                minSum = abs(arraySum)

    return minSum

def computeNegative(suffix, prefix):
    bestVal = sys.maxint
    testVal = sys.maxint
    minVal = 0
    sumVal = 0
    bestVal = 0
    testLooper = 0
    positiveArray = [None] * (len(suffix) + len(prefix))
    prefixLen = len(prefix)
    for i in range(0, prefixLen):
        prefix[i] = -abs(prefix[i])
    combinedArray = suffix + prefix
    combinedArray.sort()
    print 'combinedArray: ', combinedArray
    for i in range(0, len(combinedArray)):
        testLoopVar = combinedArray[i]
        positiveArray[i] = abs(testLoopVar)
    #print 'positiveArray = ', positiveArray
    for i in range(0, len(combinedArray)):
        for j in range(i, len(combinedArray)):
            
            for k in range(j+1, len(combinedArray)):
                testLoopVar = combinedArray[i]
                loopVar = combinedArray[k]
                initVal = combinedArray[j]
                
                testLooper += loopVar
                print 'testLooper: ', testLooper
                if testLooper < minVal:
                    testLooper = minVal
                    break
                    
                minVal = min(i for i in positiveArray if i > 0)
                #print 'minVal: ', minVal
                sumVal = (initVal) + (loopVar)
                
                #print '\ninitVal =', (initVal)
                #print 'loopVar = ', (loopVar)
                #print 'sumVal = ', (sumVal)
                #print 'testVal: ', testVal
                if abs(sumVal) < testVal:
                    if minVal < sumVal:
                        bestVal = abs(minVal)
                    else:
                        #print 'testVal before: ', testVal
                        #print 'sumVal before = ', (sumVal)
                        testVal = abs(sumVal)
                        #print 'testVal after: ', testVal
    #print 'I make it here lol'
    #print 'minVal: ', minVal
    #print 'testVal: ', testVal
    if minVal < testVal:
        #print 'I make it here'
        return minVal
    else:
        #print 'I should go here...'
        return testVal
    #print 'testVal = ', testVal
    #print 'bestVal = ', bestVal
    #print 'minVal = ', minVal

def usage():
    print 'Usage: python algorithm.py --test [option #]'
    print 'Options:'
    options = ['1 - test_cases_with_solutions', '2 - test_cases_without_solutions']
    print '\n'.join(map(lambda x:'\t'+ x, options))
    sys.exit()

if __name__ == '__main__':
    if not len(sys.argv) > 2:
        print 'No option specified.'
        usage()
    if len(sys.argv) == 3:
        arg = sys.argv[2]
        if arg == '1':
            print '#---TEST CASES WITH SOLUTIONS---#'
            print 'Reading from file: test_cases_with_solutions.txt\n'
            for i in range(1):
                inputArray = loadFromFile('test_cases_with_solutions.txt', i)
                #print 'inputArray = ', inputArray
                #Splits the array into to halves
                suffix, prefix = splitArray(inputArray)
                sortedSuffix = suffix.sort()
                sortedPrefix = prefix.sort()

                bestVal = compute(suffix, prefix)
                print 'bestVal: ', bestVal
            #print '\nminSum: ', minSum
            #print '\nminSuffix: ', minSuffix
            #print '\nminPrefix: ', minPrefix

                
        elif arg == '2':
            print '#---TEST CASES WITHOUT SOLUTIONS---#'
            print 'Reading from file: test_cases_without_solutions.txt\n'
            testArray = [31, -41, 59, 26, -53, 58, -6, 97, -93, -23]
            secondTestArray = [22, -9, 32, -27, -53, -58, -52, -149, -56, -33]
            suffix, prefix = splitArray(testArray)

            sortedSuffix = suffix.sort()
            sortedPrefix = prefix.sort()
            print 'sorted suffix: ', suffix
            print 'sorted prefix: ', prefix

            bestVal = computeNegative(suffix, prefix)
            print 'bestVal: ', bestVal
            #minSum, minSuffix, minPrefix = computeNegative(suffix, prefix)

            #print '\nminSum: ', minSum
            #print '\nminSuffix: ', minSuffix
            #print '\nminPrefix: ', minPrefix
            #for i in range(10):
            #    loadFromFile('test_cases_without_solutions.txt', i)
                
        else:
            usage()