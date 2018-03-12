
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 20:34:35
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <sstream> 
#include <string>
using namespace std;
int main(){
	long long int n;
	cin >> n;
	long long int temp1,temp2;
	string str1,str2;
	temp1 = n;
	for(int i = 0 ; i < 10 ; i++){
		ostringstream os;
		os << temp1;
		str1 = os.str();
		str2 = str1;
		reverse(str2.begin(),str2.end());
		if(str2 == str1){
			cout << temp1 <<" is a palindromic number.";
			return 0;
		}
		istringstream is(str2);
		is >> temp2;
		cout << str1 << " + " << str2 <<" = ";
		temp1 = temp1 + temp2;
		cout << temp1 <<endl;
	}
	cout << "Not found in 10 iterations."<<endl;
	return 0;
}
	
