#include <bits/stdc++.h>

using namespace std;

int dp[5005];

int dp_count(char* n, int k){
	int count = 0;
	bool inbound = 0;
	
	if(dp[k])return dp[k];
	if(k == 0)return 1;
	if(n[strlen(n)-k] == '0')return 0;
	
	count += dp_count(n, k-1);
	
	if(k>=2){
		char c[2];
		strncpy(c, n+strlen(n)-k, 2);
		if(atoi(c) <= 26) inbound = 1;
		if(inbound)count += dp_count(n, k-2);
	}
	
	dp[k] = count;
	return count;
}

int main(){
	
	char n[5005];
	while(1){
		memset(dp, 0 , sizeof dp);
		scanf("%s", n);
		printf("%i\n", dp_count(n, strlen(n)));
		if(n[0] == '0')break;
	}
	
	return 0;
}