
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-22 16:29:11
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream> 
using namespace std;
int main(){
	int num[4] = {1,3,7,8};
	int map[10000]={0};
	for(int i = 1 ; i < 10000; i++){
		for(int j = 0 ; j < 4 ; j++){
			if(i>num[j]){
				if(map[i-num[j]]==0){
					map[i]=1;
					break;
				}
			}
		}
	}
	int n;
	cin >> n;
	int temp;
	for(int i = 0 ; i < n ; i++){
		cin >> temp;
		cout << map[temp]<<endl; 
	}
	return 0;
}
	
