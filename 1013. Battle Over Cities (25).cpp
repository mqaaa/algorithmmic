
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-07 16:49:40
Version: 1.0
**************************************************************/
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;
int n,m,k;
bool map[1010][1010] = {false};
bool vis[1010] = {false};
void bfs(int i,int city){
	queue<int> q;
	q.push(i);
	vis[i] = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int j = 1 ; j <= n ; j++){
			if(vis[j] == false && map[u][j] == true && j!= city){
				q.push(j);
				vis[j] = true;
			}
		}
	}
}
void bfsTrave(int city){
	int road_num = 0;
	//vis[city] = true;
	for(int i = 1 ; i <= n ; i++){
		if(vis[i] == false && i != city){
			road_num++;
			bfs(i,city);
		}
	}
	printf("%d\n",road_num-1);
}
int main(){
	scanf("%d%d%d",&n,&m,&k);
	int temp1,temp2;
	for(int i = 0 ; i < m ; i++){
		scanf("%d %d",&temp1,&temp2);
		map[temp1][temp2] = map[temp2][temp1] = true;
	}
	for(int i = 0 ; i < k ; i++){
		memset(vis,false,sizeof(vis));
		scanf("%d",&temp1);
		bfsTrave(temp1);
	}
	return 0;
}
	
