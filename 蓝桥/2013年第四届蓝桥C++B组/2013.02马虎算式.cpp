
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-22 17:20:44
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	int d = 0;
	for(int i = 1 ; i < 10 ; i++){
		for(int j = 1 ; j < 10 ; j++){
			if(i!=j){
				for(int k = 1 ; k < 10 ; k++){
					if(k!=i&&k!=j){
						for(int e = 1 ; e < 10 ; e++){
							if(e!=i&&e!=j&&e!=k){
								for(int f = 1 ; f < 10 ; f++){
									if(f!=i&&f!=j&&f!=k&&f!=e){
										int k1 = (i*100+e*10+j)*(k*10+f);
										int k2 = (i*10+j)*(k*100+e*10+f);
										if(k1==k2){
											d++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	} 
	cout << d;
	return 0;
}
	
