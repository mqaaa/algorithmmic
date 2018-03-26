
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-24 10:51:10
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string> 
using namespace std;
int main(){
	string str;
	cin >> str;
	for(int i = 0 ; i < str.length() ; i++){
		if(i!=0)cout <<" ";
		switch (str[i]){
			case '0': cout<<"ling";break;
			case '1': cout<<"yi";break;
			case '2': cout<<"er";break;
			case '3': cout<<"san";break;
			case '4': cout<<"si";break;
			case '5': cout<<"wu";break;
			case '6': cout<<"liu";break;
			case '7': cout<<"qi";break;
			case '8': cout<<"ba";break;
			case '9': cout<<"jiu";break;
			case '-': cout<<"fu";break;
		}	
	}
	return 0;
}
	
