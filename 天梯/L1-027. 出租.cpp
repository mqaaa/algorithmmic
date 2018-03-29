
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-28 15:35:32
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool cmp(int a,int b){
	return a > b;
}
int main(){
	vector<int > map;
	bool vis[10] = {false}; 
	int v[11];
	char c;
	for(int i = 0 ; i < 11 ; i++){
		scanf("%c",&c);
		v[i]=c-'0';
		if(vis[v[i]]==false){
			vis[v[i]] = true;
			map.push_back(v[i]);
		}
	}
	sort(map.begin(),map.end(),cmp);
	printf("int[] arr = new int[]{%d",map[0]);
	for(int i = 1 ; i < map.size() ; i++)cout<<","<<map[i];
	printf("};\n");
	
	printf("int[] index = new int[]{");
	for(int i = 0 ; i < 11 ; i++){
		for(int j = 0 ; j < map.size() ; j++){
			if(map[j]==v[i]){
				if(i!=0)cout <<","<< j;
				else cout<<j;
				break;
			}
		}
	}
	printf("};");
	return 0;
}
	
