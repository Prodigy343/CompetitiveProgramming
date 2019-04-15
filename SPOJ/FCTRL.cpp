#include <bits/stdc++.h>
using namespace std;

int Z(int n){
	int z = 0;
	while(n > 0){
		z += floor(n/5);
		n /= 5;
		//cout<<"mark: "<<n<<endl;
	}
	return z;
}

int main() {
	int T;
	
	scanf("%i", &T);
	
	while(T--){
		int n;
		scanf("%i", &n);
		//cout<<n<<endl;
		int z = Z(n);
		printf("%i\n", z);
	}
	
	return 0;
}