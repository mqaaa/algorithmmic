
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-17 20:43:09
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int root = 1 ;
struct node{
	string in;
	int ri,le;
};
node test;
bool vis[25] = {false};
vector<node> v;
string dfs(int k){
	if(k==-1)return "";
	if(v[k].ri!=-1){
		v[k].in = dfs(v[k].le) + v[k].in + dfs(v[k].ri);
		if(k!=root)v[k].in = "("+v[k].in+")";
	}
	return v[k].in;
}
int main(){
	int n;
	v.push_back(test);
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> test.in >> test.le >> test.ri;
		if(test.le!=-1)vis[test.le] = true;
		if(test.ri!=-1)vis[test.ri] = true;
		v.push_back(test);
	}
	while(vis[root]==true)root++;
	cout << dfs(root)<<endl;;
	return 0;
}
	
