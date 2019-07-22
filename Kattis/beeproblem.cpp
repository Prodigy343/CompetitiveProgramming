#include <bits/stdc++.h>

using namespace std;

int movi[] = {0, 0, -1, -1, 1, 1}, movj[] = {-2, 2, -1, 1, -1, 1};
int C,N,M;
bool limits(int i, int j){
    return (i>=0 && i<N && j>=0 && j<2*M)?1:0;
}

int main() {
    scanf("%i %i %i", &C, &N, &M);

    char graph[N][2*M];
    bool v[N][2*M];
    vector<int> subsetCount;

    for(int i=0; i<N ;i++)for(int j=0; j<2*M ;j++)v[i][j] = 0;

    for(int i=0 ; i<N ; i++){
        int l = i%2?2*M+1:2*M;
        for(int j=0 ; j<l ; j++){
            scanf("%c", &graph[i][j]);
            if(graph[i][j] == '#')v[i][j] = 1;
        }
    }

    for(int i=0; i<N ;i++){
        for(int j=i%2; j<2*M ;j+=2){
            cout<<graph[i][j];
            if(!v[i][j] && graph[i][j]=='.'){
                //BFS counting visited

            }
        }
        cout<<endl;
    }

    sort(subsetCount.begin(), subsetCount.end());
    int i=0;
    for(; i<subsetCount.size() ; i++){
        C -= subsetCount[i];
        if(C<=0)break;
    }

    printf("%i\n", i);

	return 0;
}