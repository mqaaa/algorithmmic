
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 19:37:39
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string> 
using namespace std;
int main(){
	string str;
	string A,B;
	int num = 0;
	do{
		++num;
		cin >> str;
		if(num==2)A = str;
		if(num==14)B = str;
	}while(str!=".");
	if(num<3)cout<<"Momo... No one is for you ..."<<endl;
	else if(num<15)cout<<A<<" is the only one for you..."<<endl;
	else cout<<A<<" and "<<B<<" are inviting you to dinner..."<<endl;
	return 0;
}
	
