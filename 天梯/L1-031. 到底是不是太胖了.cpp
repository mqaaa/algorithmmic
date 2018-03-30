
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 10:55:47
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int height,weight;
	for(int i=0;i<n;i++)
	{
		cin>>height>>weight;
		double stan=(height-100)*0.9;
		double real=weight*0.5;
		double sr=stan*0.1;
		if(fabs(real-stan)<(sr))
		{
			cout<<"You are wan mei!"<<endl;
		}else if(real>stan){
			cout<<"You are tai pang le!"<<endl;
		}else{
			cout<<"You are tai shou le!"<<endl;
		}
	}
	return 0;
}
	
