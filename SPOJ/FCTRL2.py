def f(n):
	a = 1
	while n:
		a = a*n
		n -= 1;
	return a

T = int(raw_input())

while T:
	x = int(raw_input())
	print f(x)
	T -= 1;