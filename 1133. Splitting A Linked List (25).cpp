
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-15 21:19:35
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
//#include <map>
using namespace std;
struct node{
	int in;
	int pro;
};
node no;
int st,n,key; 
int map1[100000] = {0};
int map2[100000] = {0};
vector<node> v;
vector<node> v2;
//map<int,int> m;
int main(){
	scanf("%d %d %d",&st,&n,&key);
	int temp1,temp2,temp;
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d %d",&temp1,&temp,&temp2);
		map1[temp1] = temp;
		map2[temp1] = temp2;
	}
	no.pro = st;
	no.in = map1[st];
	v.push_back(no);
	while(v.size()!=n){
		int k = v[v.size()-1].pro;
		no.pro = map2[k];
		no.in = map1[no.pro];
		v.push_back(no);
	}
	for(int i = 0 ; i < n ; i++)
		if(v[i].in<0)v2.push_back(v[i]);
	int k2 = -1;
	for(int i = 0 ; i < n ; i++){
		if(v[i].in<key&&v[i].in>=0)v2.push_back(v[i]);
		if(v[i].in==key)k2 = i;	
	}
	if(k2!=-1)v2.push_back(v[k2]);
	for(int i = 0 ; i < n ; i++){
		if(v[i].in>key)v2.push_back(v[i]);
	}
		
		
	cout << endl;
	for(int i = 0 ; i < n-1 ; i++){
		printf("%05d %d %05d\n",v2[i].pro,v2[i].in,v2[i+1].pro);
	}
	printf("%05d %d -1\n",v2[n-1].pro,v2[n-1].in);	
	return 0;
}
	
