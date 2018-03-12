
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 16:10:07
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	int s_h,s_m,s_s;
	int e_h,e_m,e_s;
	int min = 240000,max = 0;
	cin >> n;
	string max_str,min_str,str;
	for(int i = 0 ; i < n ; i++){
		cin >> str;
		scanf("%d:%d:%d",&s_h,&s_m,&s_s);
		scanf("%d:%d:%d",&e_h,&e_m,&e_s);
		if(s_h*10000+s_m*100+s_s < min){
			min = s_h*10000+s_m*100+s_s;
			min_str = str;
		}
		if(e_h*10000+e_m*100+e_s > max){
			max = e_h*10000+e_m*100+e_s;
			max_str = str;
		}
	} 
	cout << min_str << " " << max_str; 
	return 0;
}
	
