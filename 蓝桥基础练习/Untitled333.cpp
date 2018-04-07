#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
int xi,yi;
int zi,wi;
//200*xi+3*yi;

bool p1[100000] = {false};
bool t1[100000] = {false};
struct node{
	int z;
	int w;
};
int max1 = 0;
node te;
vector<node > p;
vector<node > t;
int num = 0;
bool cmp(node a,node b){
	if(a.z!=b.z)return a.z<b.z;
	return a.w < b.w;
}
int func(int e){
	if(e > max1)e = max1;
	int num  = 0;
	for(int i = 0 ; i < n ; i++){
		if(t1[i]==true)continue;
		for(int j = 0 ; j < n ; j++){
			if(p1[j]==true)continue;
			if(p[j].z>=t[i].z&&p[j].w>=t[i].w){
				p1[j]=true;
				t1[i]=true;
				int temp = func(e+1)+200*t[i].z+3*yi;
				if(num<temp)num = temp;	
				t1[i]=false;
				p1[j]=false;
			}
		}		
	}
	return num;
}
int main(){
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		cin >> te.z >> te.w;
		p.push_back(te);
	}
	for(int i = 0 ; i < m ; i++){
		cin >> te.z >> te.w;
		t.push_back(te);
	}
	sort(p.begin(),p.end(),cmp);
	sort(p.begin(),p.end(),cmp);
	cout <<max1<<" "<< func(0);
	
	return 0;
}
