
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 21:40:19
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n; 
	cin >> n;
	string str;
	int a,b; 
	for(int i = 0 ; i < n ; i++){
		cin >> str;
		cin >> a >> b;
		if(a>20||a<15){
			cout<<str<<endl;
			continue;
		}
		if(b>70||b<50){
			cout<<str<<endl;
			continue;
		}
	}
	return 0;
}
	
