
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-22 21:53:40
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int k = 0;
void func(int n){
	if(n<0)return;
	else if(n==0){
		k++;
		return;
	}
	func(n-2);
	func(n-3);
	func(n-3);
	func(n-4);
}

int main(){
	int n = 39;
 	func(n);
 	cout << k << endl;
	return 0;
}
	
