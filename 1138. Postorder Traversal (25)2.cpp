
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-13 13:30:02
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector> 
using namespace std;
vector<int> pro,in;
bool flag = false;
void fun(int key,int st,int end){
	if(st>end||flag==true)return;
	int i = st;
	while(in[i]!=pro[key])i++;
	fun(key+1,st,i-1);
	fun(key+1+i-st,i+1,end);
	if(flag==false){
		printf("%d",in[i]);
		flag = true;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	pro.resize(n);
	in.resize(n);
	for(int i = 0 ; i < n ; i++)scanf("%d",&pro[i]);
	for(int i = 0 ; i < n ; i++)scanf("%d",&in[i]);
	fun(0,0,n-1);
	return 0;
}
	
