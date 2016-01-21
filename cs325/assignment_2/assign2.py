import os, random, time, sys, urllib2

def usage():
	print 'Usage: python assign2.py [option]'
	print 'Options:'
	options = ['--test dp_set#.txt', '--time <# of runs>']
	print '\n'.join(map(lambda x:'\t' + x, options))
	sys.exit()

def powerset(set):
	if not set:
		return [[]]
	return (powerset(set[1:]) + [[set[0]] + x for x in powerset(set[1:])])

def enumeration(numLockers, numKeys, numBalls, givenKeys, desiredLockers):
	keySets = powerset(givenKeys)
	desiredLockers.sort()
	allLockers = [x in desiredLockers for x in xrange(numLockers + 1)]
	totalOpened = []
	for keys in keySets:
		keys.sort()
		if not keys:
			continue
		p = countPaths(keys, allLockers, desiredLockers)
		totalOpened.append(p)
	return min(totalOpened)

if __name__ == '__main__':
	if not len (sys.argv) > 1:
		usage()

	elif sys.argv[1] == '--test':
		arg = None
		if len (sys.argv) < 3:
			print 'Error: Test file was not specified'
			sys.exit(1)
		elif len (sys.argv) > 3:
			print 'Error: Too many arguments'
			sys.exit(1)
		else:
			#print 'sys val = ', sys.argv[2]
			arg = sys.argv[2]
			testSets = open(arg, 'r').read().strip()
			chunks = map(lambda x: '\n'.join(x.split('\n')[1:]), testSets.split('\n\n'))

		for i, testSets in enumerate(chunks):
			if i != 4:
				continue
			lines = map(lambda x: x.strip(), testSets.split('\n'))
			numLockers, numKeys, numBalls = map(int, lines[0].split(' '))
			givenKeys = map(int, lines[1].split(' '))
			desiredLockers = map(int, lines[2].split(' '))
			if not arg:
				ans = int(lines[3])
			ourAns = enumeration(numLockers, numKeys, numBalls, givenKeys, desiredLockers)
			print 'out ans: ' + str(ourAns)
			if not arg:
				print 'real ans: ' + str(ans)

	elif sys.argv[1] == '--time':
		print 'placeholder'

	else:
		usage()