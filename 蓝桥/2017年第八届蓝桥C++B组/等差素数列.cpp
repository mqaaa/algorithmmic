
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-28 16:28:33
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int p[100010] = {0};
vector<int > v;
int vis[100010] = {0};
void su(){
	int i = 2;
	for(;i<350 ; i++){
		if(vis[i]==0){
			for(int j = i+i; j < 100010 ; j = j + i){
				vis[j]=1;
			}
		}
	}
	for(i = 2 ; i < 100010 ; i++){
		if(vis[i]==0)v.push_back(i);
	}
}
int main(){
	su();
	for(int i = 0 ; i < v.size() ; i++){
		for(int k = 1 ; k < 1000 ; k++){
			int j = v[i];
			int len = 1;
			while(vis[j+k]==0){
				//if(v[i]==7)cout<<k <<" "<<j+k<<endl;
				len++;
				j = j+k;
				if(len==10&&vis[j+k]!=0){
					cout<<k;
					return 0;
				}
			}
		}
	}
	return 0;
}
	
