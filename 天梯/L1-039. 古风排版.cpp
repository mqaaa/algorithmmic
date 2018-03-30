
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 19:58:28
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
#include <vector> 
using namespace std;
int main(){
	string str;
	int n;
	cin >> n;
	getchar();
	getline(cin,str);
	vector<string > v;
	int i;
	for(i = 0 ; i < str.length() ; i = i + n){
		v.push_back(str.substr(i,n));
	}
	for(int i = v[v.size()-1].length() ; i < n ; i++)v[v.size()-1] = v[v.size()-1] + " ";
	for(int i = 0 ; i < n ; i++){
		for(int j = v.size()-1 ; j>=0 ; j--){
			cout<<v[j][i];
		}
		cout<<endl;
	}
	return 0;
}
	
