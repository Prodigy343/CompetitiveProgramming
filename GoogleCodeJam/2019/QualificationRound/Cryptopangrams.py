def gcd(a, b):
	return a if b==0 else gcd(b, a%b)
	
T = int(raw_input())
i = 1
while(i<=T):
	word = ""
	firstP = 0
	primes = {}
	N,L = [int(s) for s in raw_input().split(" ")]
	crypto=[int(s) for s in raw_input().split(" ")]
	currentDiv = gcd(crypto[0],crypto[1])
	firstP = crypto[0]/currentDiv
	primes[firstP] = 1;
	currentDiv = firstP
	for n in crypto:
		c = n/currentDiv
		primes[c] = 1
		currentDiv = c
		
	for index,p in enumerate(sorted(primes)):
		primes[p] = chr(index+65)
	currentP = firstP
	word+=primes[firstP]
	for n in crypto:
		c = n/currentP
		word+=primes[c]
		currentP = c
	print "Case #{}: {}".format(i, word)
	i+=1
	