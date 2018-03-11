
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 11:11:37
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum = n*5;
	int temp;
	cin >> temp;
	sum = sum + temp*6;
	int k;
	for(int i = 1 ; i < n ; i++){
		cin >> k;
		if(k < temp){
			sum = sum + (temp-k)*4;
			temp = k;
		}else{
			sum = sum + (k-temp)*6;
			temp = k;
		}
	}
	cout << sum;
	return 0;
}
	
