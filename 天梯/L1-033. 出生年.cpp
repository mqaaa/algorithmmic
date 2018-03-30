
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 11:36:12
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <set>
using namespace std;
int main(){
	int year,n;
	cin >> year >> n;
	int d = year;
	while(1){
		set<int> s;
        int num = year;
        for (int j = 0; j < 4; j++) {
            s.insert(num % 10);
            num /= 10;
        }
		if(s.size()==n||year>3012)break;
		year++;
	}
	printf("%d %04d",year-d,year);
	return 0;
}


	
