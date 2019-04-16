while(1):
	N,K = [int(s) for s in raw_input().split(" ")]
	if N == 0 and K == 0:
		break;
	T = 2*pow(N-1,K,10000007)%10000007+pow(N,K,10000007)+2*pow(N-1,N-1,10000007)%10000007+pow(N,N,10000007)
	print(T%10000007)