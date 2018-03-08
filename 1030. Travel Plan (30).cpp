
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-08 16:06:08
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int map_l[505][505] = {0};
int map_c[505][505] = {0};
int INF = 10000000;
int Long[505];
int cost[505];
vector<int> path[505];
bool vis[505] = {false};
int n,m,s,d;
void Dij(int st){
	vis[st] = true;
	for(int i = 0 ; i < n ; i++){
		if(vis[i] == false && map_l[st][i]!=0){
			if(Long[i]>Long[st] + map_l[st][i] || (Long[i] == Long[st] + map_l[st][i] && cost[i] > cost[st] + map_c[st][i])){
				//cout << "***" <<endl;
				Long[i] = Long[st] + map_l[st][i];
				path[i] = path[st];
				path[i].push_back(i);
				cost[i] = cost[st] + map_c[st][i];
				Dij(i);
			}
		}
	}
	vis[st] = false;
}
int main(){
	fill(Long,Long+505,INF);
	fill(cost,cost+505,INF);
	cin >> n >> m >> s >> d;
	int t1,t2,l,c;
	for(int i = 0 ; i < m ; i++){
		cin >> t1 >> t2 >> l >> c;
		map_l[t1][t2] = map_l[t2][t1] = l;
		map_c[t1][t2] = map_c[t2][t1] = c;
	}
	vis[s] = true;
	path[s].push_back(s);
	Long[s] = 0;
	cost[s] = 0;
	Dij(s);
	for(vector<int>::iterator it=path[d].begin();it!=path[d].end();it++)cout << *it <<" ";
	cout << Long[d] << " " <<  cost[d];
	return 0;
}
	
