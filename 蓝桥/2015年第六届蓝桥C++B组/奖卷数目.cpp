
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-27 16:33:40
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	int num = 0;
	for(int i = 1 ; i < 10 ; i++){
		if(i!=4){
			for(int j = 0 ; j < 10 ; j++){
				if(j!=4){
					for(int k = 0 ; k < 10 ; k++){
						if(k!=4){
							for(int l = 0 ; l < 10 ; l++){
								if(l!=4){
									for(int d = 0 ; d < 10 ; d++){
										if(d!=4){
											num++;
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
	cout << num;
	return 0;
}
	
