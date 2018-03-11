
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 14:18:48
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> v;
int main(){
	int n;
	cin >> n;
	string str1,str2,str3;
	for(int i = 0 ; i < n ; i++){
		cin >> str1 >> str2;
		str3 = str2;
		int k = str2.length();
		for(int j = 0 ; j < k ; j++){
			if(str2[j]=='1'){
				str2[j]='@';	
			}else if(str2[j]=='0'){
				str2[j]='%';
			}else if(str2[j]=='l'){
				str2[j]='L';
			}else if(str2[j]=='O'){
				str2[j]='o';
			}
		}
		if(str3!=str2){
			v.push_back(str1);
			v.push_back(str2);
		}
	}
	if(v.size()==0){
		if(n==1){
			cout << "There is 1 account and no account is modified" << endl;
		}else{
			cout <<"There are "<< n <<" accounts and no account is modified" << endl;
		}
	}else{
		cout << v.size()/2 << endl;
		for(int i = 0 ; i < v.size() ; i = i+2){
			cout << v[i] <<" "<<v[i+1]<<endl;
		}
	}
	return 0;
}
	
