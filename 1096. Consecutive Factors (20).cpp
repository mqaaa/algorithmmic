
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 09:20:12
Version: 1.0
Learn  : sqrt((double));
**************************************************************/
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int n; 
int main(){
	cin >> n;
	int start = 0;
	int fin = 0;
	int m = sqrt((double)n);
	int maxCount = 0;
	int first = n;
	for(int i = 2 ; i < m ; i++){
		int count = 0;
		int start = i;
		int temp = n;
		while(temp%start == 0){
			temp = temp/start;
			//cout << temp << endl;
			count++;
			start++;
			//cout << start <<" "<<count << endl;
		}
		if(count > maxCount){
			maxCount = count;
			fin = start-count;
		}
	} 
	if(maxCount == 0){
		printf("1\n%d",n);
	}else{
		printf("%d\n%d",maxCount,fin);
		for(int i = 1 ; i< maxCount ; i++){
			printf("*%d",++fin);
		}
	}
	return 0;
}
	
