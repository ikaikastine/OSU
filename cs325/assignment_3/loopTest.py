import sys

if __name__ == '__main__':
    sumVal = 0
    foundVal = 0
    bestVal = sys.maxint
    testArray = [-3, 4, -5, 6]
    testArray.sort()
    for i in range(0, len(testArray)):
        for j in range(i, len(testArray)):
            for k in range(j+1, len(testArray)):

                sumVal = testArray[j] + testArray[k]
                print 'sumVal = ', sumVal
                if (abs(sumVal) < bestVal):
                   bestVal = abs(sumVal)

    print 'bestVal = ', bestVal                

