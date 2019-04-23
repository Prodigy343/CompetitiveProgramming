#include <bits/stdc++.h>

using namespace std;

inline void fint(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
    	x = -x;
}

int main(){
	int T;
	fint(T);
	
	while(T--){
		int N,MAX=-1;
		map<int,int>tree;
		fint(N);
		for(int j=1,i=1;j<=N;j++){
			int x;
			fint(x);
			if(tree[x]==0)
				tree[x]=j;
			else
				if(tree[x]<i)
					tree[x]=j;
				else{
					i=tree[x]+1;
					tree[x]=j;
				}
			MAX=max(j-i+1,MAX);
		}
		printf("%i\n",MAX);
	}

	return 0;
}