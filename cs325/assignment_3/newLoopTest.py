def mssl(l):
  f = 0
  for start in xrange(len(l)):
    for end in xrange(1, len(l)+1):
      s = sum(l[start:end]) 
      if s > f: 
        f = s
  return f  

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

for i in range(1):
    inputArray = loadFromFile('test_cases_with_solutions.txt', i)
    #print 'inputArray: ', inputArray
    best = mssl([4, -2, -8, 5, -2, 7, 7, 2, -6, 5])
    #print 'starti: ', starti
    #print 'besti: ', besti
    print 'best: ', best