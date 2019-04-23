#include <bits/stdc++.h>

using namespace std; 

#define MAXN 1000010

inline void fastRead_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;

    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());

    if(c=='-') {
    	neg = 1;
    	c = getchar_unlocked();
    }

    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    	x = (x<<1) + (x<<3) + c - 48;
    }

    if(neg)
    	x = -x;
}

main() {
    int n,m,a[MAXN],b[MAXN];
    int i,j;
    uint32_t count;
    while (1) {
        fastRead_int(n);fastRead_int(m);
        if (n==0 && m==0) break;
        for (i=1;i<=n;i++)
            fastRead_int(a[i]);
        for (i=1;i<=m;i++)
            fastRead_int(b[i]);
        count = 0;
        i = j = 1;
        while (i<=n && j<=m) {
            while (j<=m && b[j]<a[i]) j++;
            if (j>m) break;
            if (a[i]==b[j]) {
                count++; j++;
            }
            i++;
        }
        printf("%i\n",count);
    }
    return 0;
}