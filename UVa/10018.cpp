#include <bits/stdc++.h>

using namespace std;

typedef long int li;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<li> vli;
typedef vector<lli> vlli;

lli rreverse(lli n){
	lli aux=0,x=n;
	int digits=0;
	while(x!=0){x/=10;digits++;}

	while(n!=0){
		digits--;
		int dig = n%10;
		n/=10;
		aux+=dig*pow(10,digits);
	}

	return aux;
}

lli reverse_add(lli n){
	return (n + rreverse(n));
}

bool palin(lli n){
	return n==rreverse(n);
}

int main(){

	int N;
	scanf("%i",&N);
	while(N--){
		lli number,it=0;
		scanf("%lli",&number);
		while(1){
			it++;
			number = reverse_add(number);
			if(palin(number))break;
		}
		printf("%lli %lli\n",it,number);
	}
	return 0;
}