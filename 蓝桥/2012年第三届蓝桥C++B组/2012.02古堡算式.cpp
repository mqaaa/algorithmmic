 
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-19 19:24:13
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	bool vis[10] = {false};
	for(int i = 1 ; i < 10 ; i++){  //A
		vis[i] = true;
		for(int j = 0 ; j < 10 ; j++){  //B
			if(vis[j]==false){
				vis[j]= true;
					for(int k = 0 ; k < 10 ; k++){  //c
						if(vis[k]==false){
							vis[k]= true;
								for(int e = 0 ; e < 10 ; e++){ //D
									if(vis[e]==false){
										vis[e]= true;
											for(int m = 1 ; m < 10 ; m++){ //e
												if(vis[m]==false){
													if((m*10000+e*1000+k*100+j*10+i)%(i*10000+j*1000+k*100+e*10+m)==0){
														cout<<(m*10000+e*1000+k*100+j*10+i)/(i*10000+j*1000+k*100+e*10+m)<<endl;
														cout <<i*10000+j*1000+k*100+e*10+m<<endl;
														return 0;
													}
												}
											}
										vis[e]= false;
									}
								}
							vis[k]= false;
						}
					}
				vis[j]= false;
			}
		}
		vis[i] = false;
	} 
	return 0;
}
	
