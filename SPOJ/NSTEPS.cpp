#include <bits/stdc++.h>

using namespace std;

int main(){
	int T;
	scanf("%i",&T);

	while(T--){
		int x,y;
		scanf("%i%i",&x,&y);
		if(x==y){
			printf("%i\n",x%2?x*2-1:x*2);
		}else if(y+2==x){
			printf("%i\n",x%2?x+y-1:x+y);
		}else{
			printf("No Number\n");
		}
	}

	return 0;
}