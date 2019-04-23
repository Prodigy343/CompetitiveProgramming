#include <bits/stdc++.h>

using namespace std;

void fill_aut(string P, int *reset){
	int i=0, j=-1;
	reset[0] = -1;
	while(i<P.size()){
		while(j>=0 && P[i]!=P[j]) j = reset[j];
		i++;j++;
		reset[i] = j;
	}
}

void kmp(string S){
	int *reset = (int*)calloc(S.size()+1,sizeof(int));
	fill_aut(S,reset);
	int den = S.size()-reset[S.size()];
	printf("%i\n", (S.size()%den?1:S.size()/den));

}

int main(){
	string s;
	while(cin>>s&&s!="*")kmp(s);
	return 0;
}