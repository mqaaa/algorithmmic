
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-28 15:08:08
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string> 
using namespace std;
string a,b;
int main(){
	cin >> a >> b;
	int len = a.length();
	int sum1 = 0;
	for(int i = 0 ; i < len ; i++){
		if(a[i]<='9'&&a[i]>='0')sum1 = sum1*10+a[i]-'0';
		else{
			cout<<"?";
			sum1 = -1;
			break;	
		} 
	}
	if(sum1!=-1)cout<<sum1;
	cout<<" + ";
	int sum2 = 0;
	len = b.length();
	for(int i = 0 ; i < len ; i++){
		if(b[i]<='9'&&b[i]>='0')sum2 = sum2*10+b[i]-'0';
		else{
			sum2 = -1;
			cout<<"?";
			break;
		} 
	}
	if(sum2!=-1)cout<<sum2;
	cout<<" = ";
	if(sum2!=-1&&sum1!=-1)cout<<sum1+sum2;
	else cout << "?";
	return 0;
}
	
