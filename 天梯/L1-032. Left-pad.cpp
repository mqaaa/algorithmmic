
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 11:16:13
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;
int main(){
	int n;
	char c;
	string str;
	cin >> n >> c;
	getchar();
	//reverse;
	getline(cin,str);
	int len = str.length();
	if(len>n){
		str = str.substr(len-n);
		cout<< str;
	}else{
		for(int i = 0 ; i < n-len;i++)printf("%c",c);
		cout<<str; 
	}
	return 0;
}
	
