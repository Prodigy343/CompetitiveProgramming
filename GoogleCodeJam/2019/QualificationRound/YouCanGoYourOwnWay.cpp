#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N;
	char c;
	
	scanf("%i", &T);
	for(int i=1 ; i<=T ; i++){
		scanf("%i", &N);
		printf("Case #%i: ", i);
		scanf("%c", &c);
		while(scanf("%c", &c) != EOF){
		    if(c == '\n'){printf("\n");break;}
		    printf("%c",(c=='E'?'S':'E'));
		}
	}
	
	return 0;
}