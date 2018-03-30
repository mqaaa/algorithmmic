
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 20:18:59
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	double a;
	int n;
	char c;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> c >> a;
		if(c=='F')printf("%0.2f\n",a*1.09);
		else printf("%0.2f\n",a/1.09);
	} 
	return 0;
}
	
