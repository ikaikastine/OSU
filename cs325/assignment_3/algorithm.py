import sys

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
        prefix[i] = -(prefix[i])
    print 'prefix after negation', prefix
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
                
                testLooper += combinedArray[k]
                if testLooper < minVal:
                    testLooper = minVal
                    break
                    
                minVal = min(i for i in positiveArray if i > 0)
                sumVal = (initVal) + (loopVar)
                
                #print '\ninitVal =', (initVal)
                #print 'loopVar = ', (loopVar)
                #print 'sumVal = ', (sumVal)
                #print 'testVal: ', testVal
                
                if abs(sumVal) < testVal:
                    if minVal < sumVal:
                        bestVal = abs(minVal)
                    else:
                        testVal = abs(sumVal)    
    print 'minVal = ', minVal           
    if minVal < testVal:
        return minVal
    else:
        return testVal

def usage():
    print 'Usage: python algorithm.py --test [option #]'
    print 'Options:'
    options = ['1 - test_cases_with_solutions', '2 - test_cases_without_solutions']
    print '\n'.join(map(lambda x:'\t'+ x, options))
    sys.exit()

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

                bestVal = computeNegative(suffix, prefix)
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