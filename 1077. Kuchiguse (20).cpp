
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 10:20:35
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <cstring> 
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	vector<string> v;
	string str;
	int min = 1000;
	cin >>n;
	getchar();
	for(int i = 0 ; i < n ; i++){
		getline(cin,str);
		reverse(str.begin(),str.end());
		if(min > str.length()){
			min = str.length();
		}
		//cout << str << endl;
		v.push_back(str);
	}
	int k = 0;
	char s;
	for(int i = 0 ; i < min ; i++){
		s = v[0][i];
		int j;
		for(j = 1 ; j < n ; j++){
			if(v[j][i]!=s)break;
		}
		 
		if(j==n){
			k++;
		}
		if(j!=n||k==min){
			if(k>0){
				//cout << k << endl;
				for(int i = k-1 ; i >=0 ; i--)printf("%c",v[0][i]);
				return 0;
			}else{
				cout <<"nai";
				return 0;
			}
		}
	}
	return 0;
}

	
