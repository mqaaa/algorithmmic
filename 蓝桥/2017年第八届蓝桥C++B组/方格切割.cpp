
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-28 19:31:37
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int n = 0;
int num = 0;
int vis[6][6] = {0};
void func(int x,int y){
	if(n==17){
		num++;
		return;
	}
	if(x>0 && vis[x-1][y] == 0 && vis[y][x-1]==0){
		vis[x-1][y] = vis[y][x-1] = 1;
		n++;
		func(x-1,y);
		n--;
		vis[x-1][y] = vis[y][x-1] = 0;		
	}
	if(y<5 && vis[x][y+1] == 0 && vis[y+1][x]==0){
		vis[x][y+1] = vis[y+1][x] = 1;
		n++;
		func(x,y+1);
		n--;
		vis[x][y+1] = vis[y+1][x] = 0;		
	}
	
}
int main(){
	vis[5][0] = 1;
	n++;
	func(5,0); 
	cout<<num;
	return 0;
}
	
