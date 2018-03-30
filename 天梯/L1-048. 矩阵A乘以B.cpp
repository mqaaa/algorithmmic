
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 21:50:08
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int a[1000][1000]; 
int b[1000][1000]; 
int main(){
	int a_x,a_y,b_x,b_y;
	cin >> a_x >> a_y;
	for(int i = 0 ; i< a_x ; i++){
		for(int j = 0 ; j < a_y ; j++){
			cin >> a[i][j];
		}
	}
	cin >> b_x >> b_y;
	for(int i = 0 ; i< b_x ; i++){
		for(int j = 0 ; j < b_y ; j++){
			cin >> b[i][j];
		}
	}
	if(a_y!=b_x){
		cout<<"Error: "<<a_y<<" != "<<b_x;
		return 0;
	}
	cout<<a_x<<" "<<b_y<<endl;
	for(int i = 0 ; i < a_x ; i++){
		for(int j = 0 ; j < b_y ; j++){
			int sum = 0;
			for(int k = 0 ; k < a_y ; k++){
				sum = sum + a[i][k]*b[k][j];
			}
			if(j==0)cout<<sum;
			else cout<<" "<<sum;
		}
		cout<<endl;
	}
	return 0;
}
	
