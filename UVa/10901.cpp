#include <bits/stdc++.h>

using namespace std;

#define shift(i)(i?0:1)

int main(){
	int T,o=0;
	cin>>T;
	while(T--){
		if(o!=0)cout<<endl;
		int n,t,m;
		cin>>n>>t>>m;
		deque<pair<int,int> > cars;
		map<int,int> solution;
		vector <pair<int,int> > bug(m);
		for(int i=0;i<m;i++){
			int t_i;string dir;
			cin>>t_i>>dir;
			bug[i]=(dir=="left"?make_pair(t_i,0):make_pair(t_i,1));
		}

		while(m--)
			bug[m].second?cars.push_back(bug[m]):cars.push_front(bug[m]);

		int dir=0,chrono=0;
		while(!cars.empty()){
			int n_cars=0;
			if(dir==0){
				//cout<<"Izquierda! "<<chrono<<" front: "<<cars.front().first<<" back:"<<cars.back().first<<endl;
				if(cars.front().second==0){
					if(chrono>=cars.front().first){
						while(!cars.empty()&&cars.front().second==0&&n_cars<n&&chrono>=cars.front().first){
							solution[cars.front().first]=chrono+t;
							cars.pop_front();
							n_cars++;
						}
						chrono+=t;
					}else{
						if(cars.front().first<cars.back().first){
							//chrono=chrono+cars.front().first+t;
							chrono=max(chrono,cars.front().first);
							//solution[cars.front().first]=chrono;
							solution[cars.front().first]=chrono+t;

							chrono+=t;

							cars.pop_front();
						}else{
							chrono=max(chrono+t,cars.back().first+t);
						}
					}
				}else{
					chrono=max(chrono+t,cars.back().first+t);
				}
				dir=1;
			}else{
				//cout<<"Derecha! "<<chrono<<" front: "<<cars.front().first<<" back:"<<cars.back().first<<endl;
				if(cars.back().second==1){
					if(chrono>=cars.back().first){
						//cout<<cars.back().first<<" - "<<chrono<<endl;
						while(!cars.empty()&&cars.back().second==1&&n_cars<n&&chrono>=cars.back().first){

							solution[cars.back().first]=chrono+t;
							cars.pop_back();
							n_cars++;
						}
						chrono+=t;
					}else{
						if(cars.back().first<cars.front().first){
							//chrono=chrono+cars.back().first+t;
							chrono=max(chrono,cars.back().first);

							//solution[cars.back().first]=chrono;
							solution[cars.back().first]=chrono+t;

							chrono+=t;

							cars.pop_back();
						}else{
							chrono=max(chrono+t,cars.front().first+t);
						}
					}
				}else{
					chrono=max(chrono+t,cars.front().first+t);
				}
				dir=0;
			}

		}

		for(map<int,int>::iterator it=solution.begin();it!=solution.end();it++)printf("%i\n",it->second);
			o++;
	}
	return 0;
}
