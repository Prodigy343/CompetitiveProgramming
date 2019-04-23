#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

void solve(vi wagon,int N){

		stack <int> S;
		S.push(1);
		int entry=1,i=0;

		while(!S.empty()){
			if(S.top()==wagon[i]){S.pop();i++;}
			if(entry==N&&!S.empty()&&S.top()!=wagon[i])break;
			if(((!S.empty()&&S.top()!=wagon[i])||S.empty())&&entry<N){entry++;S.push(entry);}
		}

		printf("%s\n",S.empty()?"Yes":"No");

}

int main(){

	int N;
	while(scanf("%i",&N)&&N>0){
		while(1){
			vi c(N);bool f=0;
			for(int i=0;i<N;i++){
				scanf("%i",&c[i]);
				if(c[i]==0){f=1;break;}
			}
			if(f)break;
			solve(c,N);
		}
		printf("\n");
	}

	return 0;
}