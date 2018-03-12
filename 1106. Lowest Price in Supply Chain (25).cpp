
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-12 19:48:26
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
#include <queue> 
#include <cmath>
using namespace std;
int n;
double p,r;
vector<int> v[100005];
bool vis[100005] = {false};
void bfs(int st){
	//cout << st;
	queue<int> q1;
	queue<int> q2;
	for(int i = 0 ; i < v[st].size() ; i++)q2.push(v[st][i]);
	int num = 0;
	int deep = 0;
	bool key = true;
	while(!num){
		deep++;
		//cout << deep<<endl;
		q1 = q2;
		q2 = queue<int>();
		while(!q1.empty()){
			int t = q1.front();
			//cout << t << endl;
			q1.pop();
			if(v[t].size()==0)num++;
			else{
				for(int k = 0 ; k < v[t].size() ; k++){
					q2.push(v[t][k]);
				}
			}
		}
	}
	printf("%0.4f %d",p*pow((1+r/100),deep),num);
}
int main(){
	cin >> n >> p >> r;
	int temp,temp1;
	for(int i = 0; i < n ; i++){
		cin >> temp;
		for(int j = 0 ; j < temp ; j++){
			cin >> temp1;
			vis[temp1] = true;
			v[i].push_back(temp1);
			//cout << i << " "<<temp1 << endl;
		}
	}
	for(int i = 0 ; i < n ; i++)if(vis[i]==false)bfs(i);
	return 0;
}
	
