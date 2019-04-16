#include <bits/stdc++.h>

using namespace std;

//O(log y)
int power(int x, unsigned int y) { 
    int pw = 1;
    while (y > 0) { 
        if (y & 1) pw = pw*x; 
        y = y>>1;
        x = x*x;
    } 
    return pw; 
}

int main(){
    printf("%i", power(2,32));
    return 0;
}