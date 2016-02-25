import sys

def compute(suffix, prefix):
    minSum = sys.maxint
    smallestVal = 0
    currentSum = 0
    suffixLen = len(suffix)
    prefixLen = len(prefix)
    start = finish = 0
    #print 'suffixLen = ', suffixLen
    #print 'prefixLen = ', prefixLen
    fullList = suffix + prefix
    fullList.sort()
    #print 'full list: ', fullList

    for i in range(0, len(fullList)):
        for j in range(i, len(fullList)):
            currentVal = fullList[i]
            secondLoop = fullList[j]
            arraySum = (currentVal) + (secondLoop)
            smallestVal = min(i for i in fullList if i > 0)
            #print '\n**BEFORE**'
            #print 'smallestVal = ', smallestVal
            #print 'currentVal: ', currentVal
            #print 'secondLoop: ', secondLoop
            #print 'arraySum: ', arraySum
            #print 'minSum: ', minSum
            if currentVal > minSum:
            #- currentVal:
                currentSum = fullList[i]
            else:
                currentSum += fullList[j]

            if (abs(currentSum) < abs(minSum)):
                minSum = (currentSum)

                start = i
                finish = j
            if smallestVal < minSum:
                minSum = smallestVal
            #print '\n**AFTER**'
            #print 'smallestVal = ', smallestVal
            #print 'currentVal: ', currentVal
            #print 'secondLoop: ', secondLoop
            #print 'arraySum: ', arraySum
            #print 'minSum: ', minSum

    return minSum, start, finish

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
            for i in range(10):
                inputArray = loadFromFile('test_cases_with_solutions.txt', i)
                suffix, prefix = splitArray(inputArray)
                best, start, finish = compute(suffix, prefix)
                print '\nbest: ', best
                print 'start: ', start
                print 'finish: ', finish