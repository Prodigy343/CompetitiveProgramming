#include <bits/stdc++.h>

using namespace std;

int Hi(int i){
    if(i == 1 || i == 2)return i;
    return (i - 2)*3+1;
}

int main(){
    int N,i;
    scanf("%i", &N);
    while(N--){
        scanf("%i", &i);
        printf("%i\n", Hi(i));
    }
    return 0;
}