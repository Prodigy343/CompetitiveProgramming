#include <bits/stdc++.h>

using namespace std;

long long int gcd (long long int a, long long int b){
  if ( a==0 ) return b;
  return gcd ( b%a, a );
}

long long int lcm(long long int a, long long int b){
	return abs(a * b) / gcd(a, b);
}

int main(){
	while(1){
		long long int A,B;
		cin>>A>>B;
		if(A==0&&B==0)break;
		if(A==B)
			cout<<1<<endl;
		else
			cout<<lcm(A,B)/gcd(A,B)<<endl;
		//cout<<(A*B)/gcd(A,B)/gcd(A,B)<<" "<<lcm(A,B)<<endl;
	}

	return 0;
}