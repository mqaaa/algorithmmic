
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-17 15:45:13
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string> 
using namespace std;
int main(){
	string str;
	cin >> str;
	int len = str.length() + 2;
	int l = len / 3;
	int k = len - 2*l-2;
	//cout << l <<" "<<k<<endl
	string str1 = "";
	for(int i = 0 ; i < k ; i++)str1 = str1+" ";
	for(int i = 0 ; i < l-1 ; i++){
		cout<<str[i]<<str1<<str[len-3-i]<<endl;
	}
	cout << str.substr(l-1,k+2)<<endl;
	return 0;
}
	
