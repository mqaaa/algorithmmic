
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 19:31:36
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
using namespace std;
int vis[1005] = {0};
int main(){
	int n;
	cin >> n;
	int temp,temp2;
	for(int i = 0 ; i < n ; i++){
		cin >> temp;
		for(int j = 0 ; j < temp ; j++){
			cin >> temp2;
			vis[temp2]++;
		}
	}
	int max = -1;
	for(int i = 0 ; i < 1005 ; i++){
		if(max<=vis[i]){
			temp = i;
			max = vis[i];
		}
	}
	cout<<temp<<" "<<vis[temp];
	return 0;
}
	
