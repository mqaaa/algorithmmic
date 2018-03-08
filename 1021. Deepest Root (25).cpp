
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-07 21:56:00
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <queue>
#include <set>
#include <algorithm>
using namespace std;
int n;
int max = 1;
bool map[10005][10005] = {false};
bool vis[10005] = {false}; 
int v[10005] = {0};
queue<int> q1,q2;
set<int> re;
void dfs(int j){
	vis[j] = true;
	for(int i = 1 ; i <= n ; i++){
		if(vis[i]==false && map[i][j] == true){
			dfs(i);
			vis[i] = true;
		}
	}
}
void bfs(int k){
	int level = 0;
	vis[k] = true;
	v[k] = level;
	q2.push(k);
	while(true){
		
		if(q2.empty())return;
		//cout << q2.size() << endl;
		level++;
		q1 = q2;
		q2 = queue<int>();
		
		while(!q1.empty()){
			int t = q1.front();
			q1.pop();
			for(int i = 1 ; i <= n ; i++){
				if(vis[i]==false && map[t][i] == true){
					vis[i] = true;
					q2.push(i);
					v[i] = level;
				}
			}
		}
	}
}
int res(){
	int c;
	int max = 0;
	for(int i = 1 ; i <= n ; i++)if(v[i]>max){
		max = v[i];
		c = i;
	}
	for(int i = 1 ; i <= n ; i++)if(v[i]==max)re.insert(i);
	return c;
}
void bfst(){
	int q = 0;
	for(int i = 1 ; i <= n ; i++){
		if(vis[i] == false){
			dfs(i);
			q++;
		}
	}
	if(q!=1){
		printf("Error: %d components",q);
		return;
	}
	memset(vis,false,sizeof(vis));
	bfs(1);
	int temp_re = res();
	memset(vis,false,sizeof(vis));
	bfs(temp_re);
	res();
	//sort(re.begin(),re.end());
	for(set<int>::iterator it=re.begin();it!=re.end();it++)cout << *it << endl;
}
int main(){
	cin >> n;	
	int temp1,temp2;
	for(int i = 1 ; i < n ; i++){
		cin >> temp1 >> temp2;
		map[temp1][temp2] = map[temp2][temp1] = true;
	}
	bfst();
	return 0;
}
	
