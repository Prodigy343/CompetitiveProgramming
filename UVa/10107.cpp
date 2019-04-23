#include <bits/stdc++.h>

using namespace std;

typedef long int li;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<li> vli;
typedef vector<lli> vlli;

int main(){

	lli N,i=0;
	vlli nums;
	while(scanf("%lli",&N)>0){
		i++;
		nums.push_back(N);
		sort(nums.begin(),nums.end());
		printf("%lli\n",i%2?nums[i-(i/2)-1]:(nums[i/2-1]+nums[i/2])/2);
	}

	return 0;
}