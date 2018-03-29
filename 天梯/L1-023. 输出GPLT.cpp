
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-28 14:41:48
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	cin >> str;
	int len = str.length();
	int map[4] = {0};
	for(int i = 0 ; i < len ; i++){
		if(str[i]=='G'|| str[i]=='g')map[0]++;
		else if(str[i]=='P' || str[i]=='p')map[1]++;
		else if(str[i]=='L' || str[i]=='l')map[2]++;
		else if(str[i]=='T' || str[i]=='t')map[3]++;
	}
	int max = 0;
	if(map[0]>max)max = map[0]; 
	if(map[1]>max)max = map[1]; 
	if(map[2]>max)max = map[2]; 
	if(map[3]>max)max = map[3]; 
	for(int i = 0 ; i < max ; i++){
		if(map[0]-->0)printf("G");
		if(map[1]-->0)printf("P");
		if(map[2]-->0)printf("L");
		if(map[3]-->0)printf("T");
	}
	return 0;
}
	
