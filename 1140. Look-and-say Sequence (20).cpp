
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-19 08:30:01
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector> 
using namespace std;
int main(){
	int n,t;
	cin >> n >> t;
	vector<int> v1,v2;
	v2.push_back(n);
	for(int i = 0 ; i < t-1 ;i++){
		v1 = v2;
		v2 = vector<int>();	
		int temp = v1[0];
		int n = 0;
		v2.push_back(v1[0]); 
		for(int j = 0 ; j < v1.size() ; j++){
			if(v1[j]==temp){
				n++;
			}else{
				v2.push_back(n);
				v2.push_back(v1[j]);
				n = 1;
				temp = v1[j];
			}
		}
		v2.push_back(n);	
	}
	for(int k = 0 ; k < v2.size() ; k++)cout << v2[k];
	return 0;
}
	
