
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-22 14:17:18
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string> 
#include <vector>
using namespace std;
int func(int x){
	int sum = 0;
	while(x>0){
		sum += x%10;
		x = x/10;
	}
	if(sum>=10){
		return func(sum);
	}else{
		return sum;
	}
}
int main(){
	int n;
	cin >> n;
	string str;
	for(int i = 0 ; i < n ; i++){
		cin >> str;
		vector<string> v;
		int j;
		for(j = 0 ; j+6 < str.size() ; j = j+6){
			v.push_back(str.substr(j,6));
		}
		v.push_back(str.substr(j));
		for(int k = 0 ; k < 6 ; k++){
			int sum = 0;
			for(j = 0 ; j < v.size()-1 ; j++){
				sum += (int)v[j][k];
			} 
			if(v[j].size()>k)sum+= v[j][k];
			sum = func(sum); 
			cout << sum;
		}
		 cout << endl;	
	}
	return 0;
}
	
