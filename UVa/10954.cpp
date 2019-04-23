#include <bits/stdc++.h>

using namespace std;

int main(){
	int N;
	while(scanf("%i",&N)&&N){
		int c=0,n,aux[N];
		for(int i=0;i<N;i++)scanf("%i",&aux[i]);
		priority_queue <int,vector <int>,greater<int> > Q(aux,aux+N);
		while(!Q.empty()&&Q.size()!=1){
			int a=Q.top();
			Q.pop();
			int b=Q.top();
			Q.pop();
			c+=(a+b);
			Q.push(a+b);
		}
		printf("%i\n",c);
	}
	return 0;
}

