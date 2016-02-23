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
    print myArray
    print myArray[10]
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

    for i in range(0, suffixLen):
        for j in range(0, prefixLen):
            #print 'suffix[i]: ', suffix[i]
            #print 'prefix[j]: ', prefix[j]
            arraySum = suffix[i] + prefix[j]
            if (abs(arraySum) < abs(minSum)):
                print '\narraySum: ', abs(arraySum)
                print 'minSum: ', abs(minSum)
                print 'i = ', i
                print 'j = ', j
                print 'suffix[i]: ', suffix[i]
                print 'prefix[j]: ', prefix[j]
                minSum = (arraySum)
                print 'after arraySum: ', abs(arraySum)
                print 'after minSum: ', abs(minSum)
                
                minSuffix = i
                minPrefix = j

    return minSum, minSuffix, minPrefix

def computeNegative(suffix, prefix):
    bestVal = sys.maxint
    prefixLen = len(prefix)
    for i in range(0, prefixLen):
        prefix[i] = -abs(prefix[i])
    combinedArray = suffix + prefix
    combinedArray.sort()
    print 'combinedArray = ', combinedArray
    for j in range(0, len(combinedArray)):
        curBest = abs(combinedArray[j]) - abs(combinedArray[j+1])
        if curBest < bestVal:
            bestVal = curBest
    print 'bestVal = ', bestVal


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
            #Splits the array into to halves
            suffix, prefix = splitArray(inputArray)
            print 'suffix: ', suffix
            print 'prefix: ', prefix
            sortedSuffix = suffix.sort()
            sortedPrefix = prefix.sort()
            print 'sorted suffix: ', suffix
            print 'sorted prefix: ', prefix

            minSum, minSuffix, minPrefix = compute(suffix, prefix)

            print '\nminSum: ', minSum
            print '\nminSuffix: ', minSuffix
            print '\nminPrefix: ', minPrefix

                
        elif arg == '2':
            print '#---TEST CASES WITHOUT SOLUTIONS---#'
            print 'Reading from file: test_cases_without_solutions.txt\n'
            testArray = [31, -41, 59, 26, -53, 58, -6, 97, -93, -23]
            suffix, prefix = splitArray(testArray)

            sortedSuffix = suffix.sort()
            sortedPrefix = prefix.sort()
            print 'sorted suffix: ', suffix
            print 'sorted prefix: ', prefix

            computeNegative(suffix, prefix)
            #minSum, minSuffix, minPrefix = computeNegative(suffix, prefix)

            #print '\nminSum: ', minSum
            #print '\nminSuffix: ', minSuffix
            #print '\nminPrefix: ', minPrefix
            #for i in range(10):
            #    loadFromFile('test_cases_without_solutions.txt', i)
                
        else:
            usage()