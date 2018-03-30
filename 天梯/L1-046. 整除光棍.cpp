
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 22:12:56
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main(){
	int n;
	cin >> n;
	int temp = 0;
	while(temp!=1){
		for(int i = 0 ; i < 10 ; i++){
			if((temp+n*i)%10==1){
				v.push_back(i);
				temp = (temp+n*i)/10;
				break;
			}
		}
	}
	bool flag = false;
	for(int i = v.size()-1 ; i>=0 ; i--){
		if(v[i]!=0){
			cout<<v[i];
			flag = true;
		}
		if(v[i]==0&&flag)cout<<v[i];
	}
	cout<<" "<<v.size()+1;
	return 0;
}
	
