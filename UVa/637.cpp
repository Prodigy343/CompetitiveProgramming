#include <bits/stdc++.h>

using namespace std;


int main(){
	int n;
	while(scanf("%i",&n)&&n){
		int sheets = n/4 + (n%4==0?0:1);
		printf("Printing order for %i pages:\n",n);
		if(n==1){
			printf("Sheet 1, front: Blank, 1\n");
		}else{
			int i=1,fl,fr;
			if(n%4==1){
				i=3;
				printf("Sheet 1, front: Blank, 1\n");
				printf("Sheet 1, back : 2, Blank\n");
				printf("Sheet 2, front: Blank, 3\n");
				printf("Sheet 2, back : 4, %i\n",n);
				fr=4;
				fl=n;

			}else if(n%4==2){
				i=2;
				printf("Sheet 1, front: Blank, 1\n");
				printf("Sheet 1, back : 2, Blank\n");
				fr=2;
				fl=n+1;
			}else if(n%4==3){
				i=2;
				printf("Sheet 1, front: Blank, 1\n");
				printf("Sheet 1, back : 2, %i\n",n);
				fr=2;
				fl=n;
			}else{
				i=2;
				printf("Sheet 1, front: %i, 1\n",n);
				printf("Sheet 1, back : 2, %i\n",n-1);
				fr=2;
				fl=n-1;
			}

			for(;i<=sheets;i++){
				printf("Sheet %i, front: %i, %i\n",i,--fl,++fr);
				printf("Sheet %i, back : %i, %i\n",i,++fr ,--fl);
			}

		}
	}

	return 0;
}