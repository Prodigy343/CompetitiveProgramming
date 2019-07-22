#include <bits/stdc++.h>

using namespace std;

struct Point{
    int x,y;

    Point(){
        x = 0;
        y = 0;
    }

    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

    int gcd(int a, int b){
        return b==0? a:gcd(b, a%b); 
    }

    pair<int, int> slope(Point P){
        pair<int, int> s;

        s.first = this->y - P.y;
        s.second = this->x - P.x;

        int g = this->gcd(s.first, s.second);

        s.first /= g;
        s.second /= g;

        return s;
    }

};

int max_collinear(vector<Point> points){
    map<pair<int,int>, int> count;
    int m = -1;

    for(int i=0 ; i<points.size() ; i++){
        for(int j=i+1 ; j<points.size() ; j++){
            pair<int,int> slope = points[i].slope(points[j]);

            if(slope.first < 0 && slope.second < 0 || slope.first < 0 && slope.second > 0){
                slope.first *= -1;slope.second *= -1;
            }
            
            count[slope]++;
            if(m < count[slope]) m = count[slope];
        }
        count.clear();
    }
    return m+1;

}

int main(){
    int T,x,y;

    while(1){
        scanf("%i", &T);
        if(T == 0) break;
        vector<Point> points;
        for(int i=0;i<T;i++){
            scanf("%i %i", &x,&y);
            points.push_back(Point(x,y));
        }
        if(T<3)
            printf("%i\n",T);
        else
            printf("%i\n", max_collinear(points));
    }

    return 0;
}