
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-24 09:21:29
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string> 
using namespace std;
int main(){
	string str;
	cin >> str;
	int map[10] = {0};
	for(int i = 0 ; i < str.length() ; i++){
		map[str[i]-'0']++;
	}
	for(int i = 0 ; i < 10 ; i++){
		if(map[i])cout<<i<<":"<<map[i]<<endl;
	}
	return 0;
}
	
