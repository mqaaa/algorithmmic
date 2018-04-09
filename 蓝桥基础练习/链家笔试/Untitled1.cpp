#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
using namespace std;
vector<int >vis(1005,-1);
int n;
vector<vector<int> > v;
int max1 = 0;
void func(vector<int> vis_temp,int k){
	if(k==n){
		int num = 0;
		for(int i = 0 ; i < 1005 ; i++){
			if(vis_temp[i]==1)num++;
		};
		if(num > max1)max1=num;
		return;
	}
	func(vis_temp,k+1);
	for(int i = 0 ; i < v[k].size() ; i++){
		vis_temp[v[k][i]]*=-1;
	}
	func(vis_temp,k+1);
}
int main(){
	cin >> n;
	v.resize(n);
	int temp,temp2;
	for(int i  = 0 ; i < n ; i++){
		scanf("%d",&temp);
		for(int j = 0 ; j < temp ; j++){
			scanf("%d",&temp2);
			v[i].push_back(temp2);
		}
	}
	func(vis,0);
	cout << max1;
	return 0;
} 
