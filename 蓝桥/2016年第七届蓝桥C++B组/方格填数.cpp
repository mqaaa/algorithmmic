
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-28 21:56:21
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int num = 0;
	int vis[10] = {0};
	for(int t12 = 0 ; t12 < 10 ; t12++){
		vis[t12] = 1;
		for(int t13 = 0 ; t13 < 10 ; t13++){
			if(abs(t12-t13)!=1&&vis[t13]==0){
				vis[t13]=1;
				for(int t14 = 0 ; t14 < 10 ; t14++){
					if(abs(t13-t14)!=1&&vis[t14]==0){
						vis[t14]=1;
						for(int t21 = 0 ; t21 < 10 ; t21++){
							if(vis[t21]==0&&abs(t21-t12)!=1){
								vis[t21]=1;
									for(int t22 = 0 ; t22 < 10 ; t22++){
										if(vis[t22]==0&&abs(t12-t22)!=1&&abs(t13-t22)!=1&&abs(t21-t22)!=1){
											vis[t22]=1;
												for(int t23 = 0 ; t23 < 10 ; t23++){
													if(vis[t23]==0&&abs(t23-t22)!=1&&abs(t23-t14)!=1&&abs(t23-t13)!=1&&abs(t23-t12)!=1){
														vis[t23]=1;
															for(int t24 = 0 ; t24<10 ; t24++){
																if(vis[t24]==0&&abs(t23-t24)!=1&&abs(t24-t13)!=1&&abs(t24-t14)!=1){
																	vis[t24]=1;
																	for(int t31 = 0 ; t31 < 10 ; t31++){
																		if(vis[t31]==0&&abs(t21-t31)!=1&&abs(t22-t31)!=1){
																			vis[t31] = 1;
																				for(int t32 = 0 ; t32 < 10 ; t32++){
																					if(vis[t32]==0&&abs(t31-t32)!=1&&abs(t32-t21)!=1&&abs(t32-t22)!=1&&abs(t32-t23)!=1){
																						vis[t32]=1;
																						for(int t33 = 0 ; t33 < 10 ; t33++){
																							if(vis[t33]==0&&abs(t33-t32)!=1&&abs(t33-t22)!=1&&abs(t33-t23)!=1&&abs(t33-t24)!=1){
																								num++;
																							}
																						}
																						vis[t32]=0;
																					}
																				}
																			vis[t31] = 0;
																		}
																	}
																	vis[t24]=0;
																}
															}
														vis[t23]=0;
													}
												}
											vis[t22]=0;
										}
									}
								vis[t21]=0;
							}
						}
						vis[t14]=0;
					}
				}
				vis[t13]=0;
			}
		}
		vis[t12] = 0;
	}
	cout << num;
	return 0;
}
	
