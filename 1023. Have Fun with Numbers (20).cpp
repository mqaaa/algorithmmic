
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-17 09:55:59
Version: 1.0
**************************************************************/
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
bool isequl(int qa[],int qb[]){
	for(int i = 0 ; i < 10 ; i++){
		if(qa[i] != qb[i])return false;
	}
	return true;
}
int main(){
	string str1;
	cin >> str1;
	vector<int> v1,v2;
	int qa[10] = {0},qb[10] = {0};
	int len = str1.length();
	v1.resize(len);
	v2.resize(len+1);
	for(int i = len-1 ; i >=0 ; i--)v1[len-i-1]=str1[i]-'0';
	//for(int i = 0; i < len ; i++)cout << v1[i];
	int temp  = 0,temp2 = 0;
	for(int i = 0 ; i < len ; i++){
		temp = v1[i]*2;
		v2[i] = (temp + temp2)%10;
		temp2 = (temp+temp2)/10;
		qa[v1[i]]++;
		qb[v2[i]]++;
	}
	//for(int i = 0; i < len ; i++)cout << v2[i];
	if(temp2>0){
		printf("No\n");
		printf("%d",temp2);
		for(int i = v1.size()-1 ; i >=0 ; i-- )printf("%d",v2[i]);
		return 0;
	}
	if(isequl(qa,qb)){
		printf("Yes\n");
		for(int i = v1.size()-1 ; i >=0 ; i-- )printf("%d",v2[i]);
	}else{
		printf("No\n");
		for(int i = v1.size()-1 ; i >=0 ; i-- )printf("%d",v2[i]);
	}
	return 0;
}
	
