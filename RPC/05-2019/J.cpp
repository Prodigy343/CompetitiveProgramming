#include <bits/stdc++.h>

using namespace std;

bool isPerfectSquare(long double x){
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

long long int magic(int m, int n){
    long long int r = (n*n) + n + (m*m) - m;
    return r/=2;
}

int main(){
    int m, i;
    scanf("%i", &m);
    long long int ans = -1;
    i = m+2;

    while(!isPerfectSquare((double)ans)){
        ans = magic(m, i);
        i++;
    }

    cout<<sqrt(ans)<<endl;
	//printf("%i %i %i\n", m,i,n);
    return 0;
}