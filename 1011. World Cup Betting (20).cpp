
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 11:25:10
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	double a,b,c;
	double k;
	double end = 1;
	for(int i = 0 ; i < 3 ; i++){
		cin >> a >> b >> c;
		if(a > b){
			if(a > c){
				cout <<"W ";
				k = a;
			}else{
				cout <<"L ";
				k = c;
			}
		}else if(b > a){
			if(b > c){
				cout <<"T ";
				k = b;
			}else{
				cout <<"L ";
				k = c;
			}
		}
		//cout << k << endl;
		end = end * k;
	} 
	printf("%.2f",(end*0.65-1)*2+0.005);
	return 0;
}
	
