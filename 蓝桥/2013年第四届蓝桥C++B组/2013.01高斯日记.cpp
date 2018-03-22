
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-22 16:56:55
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	int y,m,d;
	int sum = 0;
	cin >> y >> m >> d; 
	for(int i = 1777 ; i < y ; i++){
		if(i%4==0&&i%400!=0){
			sum += 366; 
		}else{
			sum += 365;
		}
	}
	cout << sum << endl; 
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(int i = 1 ; i < m ; i++){
		sum += month[i];
	}
	if(m>2){
		if(y%4==0&&y%400!=0)sum+=1;
	}
	sum = sum + d;
	sum = sum - 31-28-31-30+1;
	cout << sum ;
	return 0;
}
	
