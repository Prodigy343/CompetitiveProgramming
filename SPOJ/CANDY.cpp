#include <bits/stdc++.h>

using namespace std;

int main(){
	while(1){
		int n,mid=0;
		scanf("%i",&n);
		
		if(n==-1)break;
		int cand[n];

		for(int i=0;i<n;i++){
			scanf("%i",&cand[i]);
			mid += cand[i];
		}
		
		if((mid%n)!=0){
			printf("-1\n");
		}else{
			int _=0,cut;
			mid /= n;
			sort(cand,cand+n);

			for(int i=0;i<n;i++)
				if(cand[i]<mid)
					_+=(mid-cand[i]);
				else
					break;

			printf("%i\n",_);
		}

	}
	return 0;
}