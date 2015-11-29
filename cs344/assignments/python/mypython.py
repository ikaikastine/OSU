#!/usr/bin/python

import sys
import random
import string

#Write random string to file 1
file = open('file1.txt', 'w+')
for x in range(0, 10):
	file.write(random.choice(string.lowercase));
file.close()
#Read string from file 1
file = open('file1.txt', 'r')
line = file.readline(10)
print "File 1 contains: %s" % (line)
file.close()

#Write random string to file 2
file = open('file2.txt', 'w+')
for x in range(0, 10):
	file.write(random.choice(string.lowercase));
file.close()
#Read string from file 2
file = open('file2.txt', 'r')
line = file.readline(10)
print "File 2 contains: %s" % (line)
file.close()

#Write random string to file 3
file = open('file3.txt', 'w+')
for x in range(0, 10):
	file.write(random.choice(string.lowercase));
file.close()
#Read string from file 3
file = open('file3.txt', 'r')
line = file.readline(10)
print "File 3 contains: %s" % (line)
file.close()

print (" ")

int1 = random.randint(1, 42)
int2 = random.randint(1, 42)

intSum = int1 * int2

print "Integer 1: %d" % (int1)
print "Integer 2: %d" % (int2)

print"Sum = %d" % (intSum)

