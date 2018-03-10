
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-10 15:24:20
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n;
double p,r;
vector<int> v[100005];
int vis[100005] = {0}; 
void dfs(int st,int deep){
	for(int i = 0 ; i < v[st].size() ; i++){
		vis[v[st][i]] = deep;
		dfs(v[st][i],deep+1);
	}
}
int main(){
	cin >> n >> p >> r;
	int temp,temp2;
	for(int i = 0 ; i < n ; i++){
		cin >> temp;
		if(temp == -1)temp2 = i;
		else v[temp].push_back(i);
	} 
	dfs(temp2,1);
	int max = 0;
	for(int i = 0 ; i < n ; i++){
		if(vis[i]>max){
			temp = 1;
			max = vis[i];
		}else if(vis[i]==max){
			temp++;
		}
	}
	r = 1+r/100;
	printf("%0.2f %d",pow(r,max)*p,temp);
	return 0;
}
	
