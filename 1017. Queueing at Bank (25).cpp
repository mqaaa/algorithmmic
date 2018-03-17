#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
struct Time{
	int come;
	int cost;
	int wait;
	Time(){
		wait = 0;
	}
};
Time t;
bool cmp(Time a,Time b){
	return a.come < b.come;
}
vector<Time> v;
int n,l;
int h,m,s,w;
int main(){
	scanf("%d %d",&n,&l);
	for(int i = 0 ; i < n ; i++){
		scanf("%d:%d:%d %d",&h,&m,&s,&w);
		t.come = h*3600 + m*60 + s;
		if(t.come < 61200){
			t.cost = w * 60;
			v.push_back(t);
		} 
	}
	sort(v.begin(),v.end(),cmp);
	
	vector<int> g(l,28800);
	int num = v.size();
	int cost = 0;
	for(int i = 0 ; i < num ; i++){
		int min = g[0];
		int min_key = 0;
		for(int j = 1 ; j < l ; j++){
			if(min > g[j]){
				min = g[j];
				min_key = j;
			}
		}
		if(v[i].come>=min){
			g[min_key] = v[i].come+v[i].cost;
		}else if(v[i].come <min){
			g[min_key] = min + v[i].cost;
			cost = cost + min- v[i].come;
		}
	}
	printf("%0.1f",(double)cost/60/v.size());	
	return 0;
}
