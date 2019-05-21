#include <bits/stdc++.h>
using namespace std;

struct poly{
	char type;
	vector<int> points;
	
	poly(){
		this->type = 'c';
	}
	
	//circle constructor
	poly(int cx, int cy, int r){
		this->type = 'c';
		this->points.push_back(cx);
		this->points.push_back(cy);
		this->points.push_back(r);
	}
	
	//rectangle constructor
	poly(int b1, int b2, int t1, int t2){
		this->type = 'r';
		this->points.push_back(b1);
		this->points.push_back(b2);
		this->points.push_back(t1);
		this->points.push_back(t2);
	}
};

bool collision(int x, int y, poly g){
	if(g.type == 'c'){
		int xs2 = (x - g.points[0])*(x - g.points[0]);
		int ys2 = (y - g.points[1])*(y - g.points[1]);
		if(sqrt(xs2+ys2)<=g.points[2])return 1;
		return 0;
	}else{
		if(x >= g.points[0] && x <= g.points[2]
		&& y >= g.points[1] && y <= g.points[3])return 1;
		return 0;
	}
}

int main() {
	int N,M;
	vector<poly> geometries;
	cin>>N;
	string type;
	int a[4];
	
	while(N--){
		cin>>type;
		if(type == "circle"){
			cin>>a[0]>>a[1]>>a[2];
			geometries.push_back(poly(a[0],a[1],a[2]));
		}else{
			cin>>a[0]>>a[1]>>a[2]>>a[3];
			geometries.push_back(poly(a[0],a[1],a[2],a[3]));
		}
	}
	
	cin>>M;
	int x,y,c;
	while(M--){
		cin>>x>>y;
		c = 0;
		for(int i=0 ; i<geometries.size() ; i++)if(collision(x,y,geometries[i])) c++;
		cout<<c<<endl;
	}
	
	return 0;
}