
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-19 19:01:25
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	long long  x = 10, y=90;
	for(int i= 1 ; i <=120 ; i++){
		if(i%2==1){
			y = y-x;
		}
		if(i%6==0){
			x = x*2;
		}
		if(i%4==0){
			y = y*2;
		}
	} 
	cout<< y << endl;
	return 0;
}
	
