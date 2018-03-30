
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 19:50:31
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	cout << a<<"/";
	if(b==0){
		cout<<"0=Error";
	}else if(b<0){
		cout<<"("<<b<<")=";
		printf("%0.2f",(double)a/b); 
	}else{
		cout<<b<<"=";
		printf("%0.2f",(double)a/b);
	}
	return 0;
}
	
