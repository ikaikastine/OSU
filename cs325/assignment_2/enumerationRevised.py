import sys
from itertools import chain, combinations

class Locker:
    def __init__(self):
        self._numKeys = 0
        self._numBalls = 0
        self._numLockeres = 0
        self._keys = []
        self._tennisBalls = []
        self._sampleOutput = 0

    #Usage: provide a filename to load a locker
    def loadFromFile(self, filename, index):
        f = open(filename, 'r')
        if index > 7:
            print 'Index: out of bounds'
            return

        for i in range(index):
            for i in range(5):
                trash = f.readline()

        f.readline() #Trash newline
        f.readline() #Trash heading
        counts = f.readline().rstrip(' \r\n').split(' ')
        keys = f.readline().rstrip(' \r\n')
        tennisBalls = f.readline().rstrip(' \r\n')
        
        self._numLockers = int(counts[0])                                       #Number of lockers
        self._numKeys = int(counts[1])                                          #Number of keys
        self._numTennisBalls = int(counts[2])                                   #Number of tennis balls
        self._keys = [int(numStr) for numStr in keys.split(' ')]                #Ordered list of key lockers
        self._tennisBalls = [int(numStr) for numStr in tennisBalls.split(' ')]  #Ordered list of tennis ball lockers

        self._keys.sort()
        self._tennisBalls.sort()

    def algorithmOne(self):
        leastOpenedLockers = self._numLockers

        #print 'DEBUG: _tennisBalls =', self._tennisBalls
        keySet = set(self._keys)

        for keys in chain.from_iterable(combinations(keySet, r) for r in range(len(keySet) + 1)):
            unopened = 0
            keys = sorted(keys)

            if(len(keys) < 1):
                continue

            if self._tennisBalls[0] <= keys[0]:
                #print '_tennisBalls - 1=', self._tennisBalls[0] - 1
                #print 'keys =', keys[0]

                unopened += self._tennisBalls[0] - 1
                
            else:
                unopened += keys[0] - 1
                

            if self._tennisBalls[self._numTennisBalls - 1] > keys[len(keys) - 1]:
                unopened += self._numLockers - self._tennisBalls[self._numTennisBalls - 1]
                
            else:
                unopened += self._numLockers - keys[len(keys) - 1]
                #print 'Unopened =', unopened

            if(len(keys) == 1): 
                if ((self._numLockers - unopened) < leastOpenedLockers):
                    leastOpenedLockers = self._numLockers - unopened
                    unopened = 0
                continue

            ballCounter = 0 
            while(self._tennisBalls[ballCounter] < keys[0]):
                if ballCounter + 1 < self._numTennisBalls:
                    ballCounter += 1
                else:
                    break

            z = 0
            for z in range(len(keys) - 1):
                if ballCounter >= self._numTennisBalls:
                    break
                firstLocker = keys[z] + 1
                bestEmptySet = 0
                for i in range(firstLocker, keys[z + 1]):
                    if ballCounter >= self._numTennisBalls:
                        break
                    j = i
                    if (i == self._tennisBalls[ballCounter]):
                        ballCounter += 1
                        continue
                    else:
                        #print 'j = ', j
                        #print 'teniis ball [ballCounter] =', self._tennisBalls[ballCounter]
                        while(j + 1 < self._tennisBalls[ballCounter]):
                            j += 1
                        if (j-i) + 1 > bestEmptySet and (j - i) + 1 > 0:
                            #print 'self._numTennisBalls =', self._numTennisBalls
                            #print 'self._numKeys = ', self._numKeys
                            if self._numKeys > self._numTennisBalls:
                                if ballCounter >= 1:
                                    bestEmptySet += 1

                            else:
                                ballCounter += 1
                                bestEmptySet += 1
                            #print 'best empty set =', bestEmptySet
                unopened += bestEmptySet
               
            #print 'unopened', unopened
            if((self._numLockers - unopened) < leastOpenedLockers):
                leastOpenedLockers = self._numLockers - unopened
                #print 'leastOpenedLockers =', leastOpenedLockers
                unopened = 0
        return leastOpenedLockers
    
def usage():
    print 'Usage: python lockers.py --test [option #]'
    print 'Options:'
    options = ['1 - Enumeration Algorithm', '2 - Dynamic Programming Algorithm']
    print '\n'.join(map(lambda x:'\t'+ x, options))
    sys.exit()

if __name__ == '__main__':
        l = Locker()
        if not len(sys.argv) > 2:
            usage()
        if len(sys.argv) == 3:
            arg = sys.argv[2]
            if arg == '1':
                print '#---ENUMERATION TEST CASES---#'
                print 'Reading from file: dp_set1.txt\n'
                for i in range(8):
                    l.loadFromFile('dp_set1.txt', i)
                    print 'Test case:', i+1
                    bestEnumValue = l.algorithmOne()
                    print 'Minimum number of lockers opened:', bestEnumValue
                    print
            else:
                usage()