#include <bits/stdc++.h>

using namespace std;

int rev(int n){
	int x=0,buff[20],lim=0;

	while(n>0){
		int act = n%10;
		n/=10;
		buff[lim++] = act;
	}

	n=lim-1;

	for(int i=0;i<lim;i++)
		x+=(buff[i]*pow(10,n--));

	return x;
}

int main(){
	int T;
	scanf("%i",&T);
	
	while(T--){
		int a,b;
		scanf("%i%i",&a,&b);
		printf("%i\n",rev(rev(a)+rev(b)));
	}

	return 0;
}