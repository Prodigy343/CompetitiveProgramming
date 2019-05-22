#include <bits/stdc++.h>

using namespace std;

long long int sum(int n){
    return n>0?(n*(n-1))/2:0;
}

int main(){
    int m;
    scanf("%i", &m);
    int i=m+1, n;
    for( ; i<m ; i++){
        long long int f1 = sum(i-1)-sum(m-1), f2 = sum(i+2)-sum(i+1);
        int j = i+1;
        while(f2<f1){
            if(f2>f1){
                n = j;
                break;
            }
            j++;
        }

        if(f1 == f2)break;
    }

    printf();

    return 0;
}