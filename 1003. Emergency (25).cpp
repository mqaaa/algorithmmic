
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-07 10:28:48
Version: 1.0
**************************************************************/
//DFS 
#include <cstdio>
#include <iostream>
int n,r,st,en;
int vis[501] = {0};
int w[501][501] = {0};
int t[501] = {0};
int Maxt = 0,short_long = 10000,short_num = 0;
using namespace std;
void dfs(int s,int k,int team){
	//cout << s << k << team << endl;
	if(k > short_long)return;
	if(s == en ){
		if(k < short_long){
			short_num = 1;
			Maxt = team;
			short_long = k;
		}else if(k == short_long){
			short_num++;
			if(team > Maxt )Maxt = team;
		}
		return;
	}
	vis[s] = 1;
	for(int i = 0 ; i < n ; i++){
		/*cout << "****"<<endl;
		cout<<w[s][i]<<endl;
		cout<<vis[i]<<endl;*/
		if(vis[i] == 0 && w[s][i]>0){	
			dfs(i,k+w[s][i],team+t[i]);
		}
	}
	vis[s] = 0;
}
int main(){
	int t1,t2,t3;
	cin >> n >> r >> st >> en;
	for(int i = 0 ; i < n ; i++)cin >> t[i];
	for(int i = 0 ; i < r ; i++){
		cin >> t1 >> t2 >> t3;
		w[t1][t2] = w[t2][t1] = t3;
	}
	dfs(st,0,t[st]);
	printf("%d %d",short_num,Maxt);
	return 0;
}
	
