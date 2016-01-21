from itertools import chain, combinations

class Locker:
    def __init__(self):
        self._numKeys = 0
        self._numBalls = 0
        self._numLockeres = 0
        self._keys = []
        self._tennisBalls = []
        self._sampleOutput = 0

    def printFormat(self):
        print 'n={} m={} t={}\nM{}\nT{}\n'.format(self._numLockers, self._numKeys, self._numTennisBalls, self._keys, self._tennisBalls)

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
        
        self._numLockers = int(counts[0])
        self._numKeys = int(counts[1])
        self._numTennisBalls = int(counts[2])
        self._keys = [int(numStr) for numStr in keys.split(' ')]
        self._tennisBalls = [int(numStr) for numStr in tennisBalls.split(' ')]

        self._keys.sort()
        self._tennisBalls.sort()

    def algorithmOne(self):
        leastOpenedLockers = self._numLockers

        keySet = set(self._keys)

        for keys in chain.from_iterable(combinations(keySet, r) for r in range(len(keySet) + 1)):
            unopened = 0
            keys = sorted(keys)

            if(len(keys) < 1):
                continue

            if self._tennisBalls[0] < keys[0]:
                unopened += self._tennisBalls[0] - 1
            else:
                unopened += keys[0] - 1

            if self._tennisBalls[self._numTennisBalls - 1] > keys[len(keys) -1]:
                unopened += self._numLockers - self._tennisBalls[self._numTennisBalls -1]
            else:
                unopened += self._numLockers - keys[len(keys) - 1]

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
                for i in range(firstLocker, keys[z+1]):
                    if ballCounter >= self._numTennisBalls:
                        break
                    j = i
                    if (i == self._tennisBalls[ballCounter]):
                        ballCounter += 1
                        continue
                    else:
                        while(j+1 < self._tennisBalls[ballCounter]):
                            j += 1
                        if (j-i) + 1 > bestEmptySet and (j - i) + 1 > 0:
                            ballCounter += 1
                            bestEmptySet = (j-i) + 1
                unopened += bestEmptySet
            if((self._numLockers - unopened) < leastOpenedLockers):
                leastOpenedLockers = self._numLockers - unopened
                unopened = 0
        print 'Least opened lockers: ', leastOpenedLockers
        return leastOpenedLockers
    
    def algorithmTwo(self):
        n = self._numLockers
        m = self._numKeys
        t = self._numTennisBalls
        M = self._keys
        T = self._tennisBalls

        M.sort()
        T.sort()

        D = []

        for i in range(0, m):
            D.append(float('inf'))

        #First key
        if M[0] <= T[0]:
            D[0] = 0
        else:
            D[0] = M[0] - T[0] + 1

        #Middle key
        for i in range(1, m):
            for j in range(0, i):
                leastOpened = self.LEAST_OPENED(M[i], M[j])
                if D[j] + leastOpened < D[i]:
                    D[i] = D[j] + leastOpened

        #Second key
        if T[t-1] >= M[m-1]:
            D[m-1] += (T[t-1] - M[m-1]) + 1

        return D[m-1]

    def LEAST_OPENED(self, mi, mj):
        bestUnopenedCount = 0
        if mi - mj == 1:
            if mi in self._tennisBalls:
                if mj in self._tennisBalls:
                    return 1
                else:
                    return 0
            else:
                if mj in self._tennisBalls:
                    return 1
                else:
                    return 0
        else:
            for i in range(mj + 1, mi):
                j = i
                if i in self._tennisBalls:
                    continue
                else:
                    while(j + 1) not in self._tennisBalls and j < mi -1:
                        j += 1
                    if (j - i) + 1 > bestUnopenedCount:
                        bestUnopenedCount = (j-i) + 1
            return (mi - (mj+1) + 1) - bestUnopenedCount

if __name__ == '__main__':
    for i in range(8):
        l = Locker()

        #---ENUMERATION TEST CASES---#
        l.loadFromFile('dp_set1.txt', i)
        l.printFormat()
        l.algorithmOne()

        #---DYNAMIC PROGRAMMING TEST CASES---#
        l.loadFromFile('dp_set2.txt', i)
        l.printFormat()
        bestValue = l.algorithmTwo()
        print 'Least opened lockers:', bestValue