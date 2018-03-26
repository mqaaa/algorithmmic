
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-24 09:29:00
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
struct node{
	string str;
	int end;
};
int main(){
	int n;
	cin >> n; 
	node temp[1000];
	node a;
	int b;
	for(int i = 0 ; i < n ; i++){
		cin >> a.str >> b >> a.end;
		temp[b] = a;
	}
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> b;
		cout << temp[b].str <<" "<<temp[b].end<<endl; 
	} 
	return 0;
}
	
