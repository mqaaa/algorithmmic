
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-24 11:08:44
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
using namespace std;
int func(int n,int m){
	if(m==0){
		return n;
	}else{
		return func(m,n%m);
	}
}
int main(){
	int n;
	cin >> n;
	int temp1,temp2;
	int t1,t2;
	char x,y;
	scanf("%d/%d",&t1,&t2);
	for(int i = 1 ; i < n ; i++){
		scanf(" %d/%d",&temp1,&temp2);
		t1 = t1*temp2 + t2*temp1;
		t2 = t2*temp2;
		int k = func(t1,t2);
		t1 = t1/k;
		t2 = t2/k;	
	}
	if(t1/t2){
		cout<<t1/t2<<" ";
	}
	if(t1%t2){
		cout<<t1%t2<<"/"<<t2<<endl;
	}
	return 0;
}
	
