
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-24 10:59:30
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	int k = 0;
	int sum = 0;
	for(int i = a ; i <= b ; i++){
		if(k==5){
			cout << endl;
			k=0;
		}
		k++;
		sum = sum +i ;
		printf("%5d\t",i);
	} 
	printf("\nSum = %d",sum);
	return 0;
}
	
