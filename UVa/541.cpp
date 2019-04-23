#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    while(scanf("%i",&N)&&N){
        bool mat[N][N];
        int c=0,x,y;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        int row=-1,col=-1;
        for(int i=0;i<N;i++){
            int ones=0,tones=0;
            for(int j=0;j<N;j++){
                if(mat[i][j])ones++;
                if(mat[j][i])tones++;
            }
            if(tones%2){col=i;c++;}
            if(ones%2){row=i;c++;}
            if(c>2)break;
        }

        if(c==1)c=10;
        else if(c==2){
            if(row>=0&&col>=0){
                mat[row][col]=(mat[row][col]?0:1);
                int a=0,b=0;
                for(int i=0;i<N;i++){
                    if(mat[row][i])a++;
                    if(mat[i][col])b++;
                }
                if(a%2==0&&b%2==0){x=row+1;y=col+1;}
                c=1;
            }else{
                c=10;
            }
        }else{
            //?
        }


        if(c==0)
            cout<<"OK"<<endl;
        else if(c==1)
            cout<<"Change bit ("<<x<<","<<y<<")"<<endl;
        else
            cout<<"Corrupt"<<endl;


    }
    return 0;
}

