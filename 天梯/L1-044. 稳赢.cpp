
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 22:35:33
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string str;
	cin >> n;
	int k = 0;
	cin >> str;
	while(str!="End"){
		if(k==n){
			k = 0;
			cout<<str<<endl;
		}else{
			k++;
			if(str=="ChuiZi")cout<<"Bu"<<endl;
			else if(str=="Bu")cout<<"JianDao"<<endl;
			else if(str=="JianDao")cout<<"ChuiZi"<<endl;
		}
		cin >> str;
	}
	return 0;
}
	
