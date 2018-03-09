
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-09 16:33:20
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	int a;
	cin >> a;
	if(a==1){
		cout<<1<<endl;
		return 0;
	}else if(a==2){
		cout<<1<<endl;
		return 0;
	}
	int temp1 = 1,temp2 = 1;
	int temp3;
	for(int i = 0 ; i < a-2 ; i++){
			temp3 = temp1 + temp2;
			//cout << temp1 << " " << temp2 << endl;
			temp3 = temp3%10007;
			temp1 = temp2;
			temp2 = temp3;
	}
	cout<<temp3<<endl;
	 
	return 0;
}
	
