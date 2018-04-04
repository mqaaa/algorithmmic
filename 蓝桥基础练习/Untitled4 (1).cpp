#include <iostream>
#include <vector>
using namespace std;
int main(){
	int st,end;
	cin >> st >> end;
	bool vis[10001] = {false};
	for(int i = 2 ; i*i < 10001 ; i++){
		if(vis[i]==false){
			for(int j = i+i ; j < 10001 ; j = j+i){
				vis[j]=true;
			}
		}
	}
	vector<int > v;
	for(int i = 2 ; i < 10001 ; i++){
		if(vis[i]==false)v.push_back(i);
	}
	for(int i = st ; i <= end ; i++){
		cout<<i<<"=";
		if(vis[i]==false)cout<<i;
		else{
			int temp = i;
			for(int j = 0 ; j < v.size()&&temp>0 ; j++){
				while(temp){
					if(temp%v[j]==0){
						if(temp!=i)cout <<"*"<<v[j];
						else cout<<v[j];
						temp = temp/v[j];
					}else{
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}
