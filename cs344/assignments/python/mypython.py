#!/usr/bin/python

import sys
import random
import string

string.letters = 'abcdefghijklmnopqrstuvwxyz'

file = open('file1.txt', 'w+')
for x in range(0, 10):
	file.write(random.choice(string.lowercase));

line = file.read(10)
file.write('\n');
print "%s" % (line)
#print (random.choice(string.lowercase) for x in range(10))
file.close()
