from sys import stdin, stdout
import math

m = int(stdin.readline())
i = m+2
while i<=10000000:
	sr = math.sqrt((i ** 2 + i + m **2 - m)/2)
	if (sr - math.floor(sr)) == 0:
		break
	i += 1
stdout.write(str(m)+" "+str(int(sr))+" "+str(i))