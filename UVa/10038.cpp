#include <bits/stdc++.h>

using namespace std;


int main(){
	int n;
	while(scanf("%i",&n)>=0){

		int mark[n],count=0,act,past,f=1;
		memset(mark,0,sizeof(mark));
		scanf("%i",&past);
		for(int i=1;i<n;i++){
			scanf("%i",&act);
			if(f){
				int ABS=abs(past-act);
				if(ABS>(n-1)||ABS<0)
					f=0;
				else{
					mark[ABS]++;
					mark[ABS]>1?f=0:count++;
				}
				past=act;
			}
		}
		printf("%s",f?"Jolly\n":"Not jolly\n");
	}

	return 0;
}