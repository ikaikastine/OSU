import os, random, time, sys, urllib2



if __name__ == '__main__':
	if not len (sys.argv) > 1:
		print 'Usage: python assign2.py [option]'
		print 'Options:'
		options = ['--test', '--time <# of runs>']
		print '\n'.join(map(lambda x:'\t' + x, options))
		sys.exit()
