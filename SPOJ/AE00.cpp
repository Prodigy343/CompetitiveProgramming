#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,c;
	scanf("%i",&n);
	c=n;
	for(int i=2;;i++)
		if(((n/i)-(i-1))>0)c+=((n/i)-(i-1));
			else break;
	printf("%i\n",c);
	return 0;
}