
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 15:43:44
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	string str;
	cin >> str;
	int sum = 0;
	for(int i = 0 ; i < str.length() ; i++){
		sum = sum + str[i]-'0';
	}
	ostringstream os;
	os << sum;
	str = os.str();
	for(int i = 0 ; i < str.length() ; i++ ){
		switch(str[i]){
			case '0':printf("zero");break;
			case '1':printf("one");break;
			case '2':printf("two");break;
			case '3':printf("three");break;
			case '4':printf("four");break;
			case '5':printf("five");break;
			case '6':printf("six");break;
			case '7':printf("seven");break;
			case '8':printf("eight");break;
			case '9':printf("nine");break;
		}
		if(i!=str.length()-1)printf(" ");	
	}
	return 0;
}
	
