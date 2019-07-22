#include <bits/stdc++.h>

using namespace std;

struct Order
{
    bool operator()(pair<int,int> const& a, pair<int,int> const& b) const
    {
        return a.second > b.second || a.second == b.second && a.first > b.first;
    }
};

int main(){

    int n,c;
    scanf("%d %d", &n, &c);
    int p[c];
    for(int i=0 ; i<c ; i++)scanf("%d", &p[i]);
    priority_queue<pair<int,int>, vector<pair<int,int> >, Order> Q;
    for(int i=0 ; i<n ; i++)Q.push(make_pair(i+1, 0));
    for(int i=0 ; i<c ; i++){
        pair<int,int> curr = Q.top();
        Q.pop();
        printf("%d", curr.first);
        if(i != c-1)printf(" ");
        Q.push(make_pair(curr.first, curr.second + p[i]));
    }
    printf("\n");

    return 0;
}