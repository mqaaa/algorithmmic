
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-27 16:41:53
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int run(int y){
	if((y%4==0&&y%100!=0)||(y%400==0))return 366;
	return 365;
}
int main(){
	int n;
	cin >> n;
	if(n<22){
		cout<<"2014.11."<<n+9; 
		return 0;
	}
	n = n-22;
	int y = 2014;
	int days = run(y+1);
	while(n>days){
		n = n-days;
		y++;
		days = run(y+1);
	}
	int m[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int i = 0;
	if(run(y+1)==366)m[1]=29;
	while(n>m[i]){
		i++;
		n -= m[i];
	}
	cout<<y+1<<"."<<i<<"."<<n<<endl; 
	return 0;
}
	
