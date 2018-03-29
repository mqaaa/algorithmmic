
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-27 15:45:00
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	int n;
	int a,b;
	cin >> a >> b;
	cin >> n;
	int t1,t2,t3,t4;
	int c = -1,d=-1;
	bool flag = false;
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d %d %d",&t1,&t2,&t3,&t4);
		t1 = t1 + t3;
		if(flag||t2==t4)continue;
		if(t1==t2)c++;
		if(t1==t4)d++;
		if(c==a){
			cout<<"A\n"<<d+1<<endl;
			flag = true;
		}
		if(d==b){
			cout <<"B\n"<<c+1<<endl;
			flag = true;
		}
	} 
	return 0;
}
	
