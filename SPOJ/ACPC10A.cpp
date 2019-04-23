#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	
	while(1){
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0)break;
		if(b+b-a == c)
			printf("AP %i\n",c+c-b);
		else
			printf("GP %i\n",(b/a)*c);

	}

	return 0;
}