
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-07 15:01:36
Version: 1.0
**************************************************************/
//BFS 
#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
bool fan[1002][1002] = {false};
int n,l;
queue<int> q1,q2; //q1负责运算，q2负责存储
bool vis[1002] = {false}; 
void fan_num(int k){
	int num = 0;
	q2.push(k);
	vis[k] = true;
	for(int i = 0 ; i < l ; i++){
		q1 = q2;
		q2 = queue<int>();
		while(!q1.empty()){
			int bfs_t = q1.front();
			q1.pop();
			for(int j = 1 ; j <= n ; j++ ){
				if(fan[bfs_t][j] == true && vis[j] == false){
					vis[j] = true;
					//cout << j <<endl;
					q2.push(j);
					num++;
				}
			}
		}
	}
	cout << num << endl;
}
void clear(){
	for(int i = 0 ; i <= n ; i++)vis[i]=false;
}
int main(){
	cin >> n >> l;
	int temp,temp2;
	for(int i = 1 ; i <= n ; i++){
		cin >> temp;
		for(int j = 0 ; j < temp ; j++){
			scanf("%d",&temp2);
			fan[temp2][i] = true;
		}
	}
	cin >> temp;
	for(int j = 0 ; j < temp ; j++){
		cin >> temp2;
		fan_num(temp2);
		clear();
	}
	return 0;
}
	
