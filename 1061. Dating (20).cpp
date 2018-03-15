
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-14 14:10:24
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string> 
using namespace std;
string str1,str2,str3,str4;
int main(){
	cin >> str1 >> str2 >> str3 >> str4;
	int len = str1.length() < str2.length() ? str1.length() : str2.length();
	bool _char = true; 
	for(int i = 0 ; i < len ; i++){
		if(str1[i]==str2[i]){
			
			if(_char==false){
				//cout << str1[i] << endl;
				if(str1[i]>='0'&&str1[i]<='9'){
					printf("0%c:",str1[i]);
					break;
				}else if(str1[i]>='A'&&str1[i]<='N'){
					printf("%d:",str1[i]-'A'+10);
					break;
				}
			}
			if(_char && str1[i]>='A' && str1[i]<='G'){
				//cout << str1[i] << endl;
				//int k = str1[i]-'A'+1;
				switch (str1[i]){
					case 'A':printf("MON ");break;
					case 'B':printf("TUE ");break;
					case 'C':printf("WED ");break;
					case 'D':printf("THU ");break;
					case 'E':printf("FRI ");break;
					case 'F':printf("SAT ");break;
					case 'G':printf("SUN ");break;
				} 
				_char = false;
			}
		}	
	}
	len = str3.length() < str4.length() ? str3.length() : str4.length();
	for(int i = 0 ; i < len ; i++){
		//cout << str3[i] << endl;
		if(str3[i]==str4[i] && isalpha(str3[i])){
			printf("%02d",i);
			return 0;
		}
	}
	return 0;
}
	
