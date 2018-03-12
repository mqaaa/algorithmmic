
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-12 09:24:54
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <sstream> 
 using namespace std;
int main(){
	int a;
	int temp1,temp2;
	int n;
	string str;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a;
		ostringstream os;
		os << a;
		str = os.str();
		int k = str.length();
		int t = 1;
		for(int j = 0 ; j < k/2 ; j++){
			t = t*10;
		}
		temp1 = a/t;
		temp2 = a%t;
		if(a%(temp1*temp2)==0)cout<<"Yes"<<endl;
		else cout <<"No"<<endl;
	} 
	return 0;
}
	
