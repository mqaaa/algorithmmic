
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 10:25:16
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n; 
	cin >> n;
	string str;
	int temp;
	vector<int> v;
	vector<string >v1,v2;
	for(int i = 0 ; i < n ; i++){
		cin >> temp >> str;
		v.push_back(temp);
		if(temp==0)v1.push_back(str);
		else v2.push_back(str);
	}
	int k1 = 0,k2 = 0;
	for(int i = 0 ; i <n/2 ; i++){
		if(v[i]==0){
			cout<<v1[k1]<<" "<<v2[n/2-1-k1]<<endl;
			k1++;
		}else{
			cout<<v2[k2]<<" "<<v1[n/2-1-k2]<<endl;
			k2++;
		}
	}
	return 0;
}
	
