
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-09 17:08:58
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int n;
int temp;
int temp1;
int map2[2][28] = {0};
struct Vis{
	int p;
	int num;
};
struct Node{
	int no;
	int sum;
};
bool cmp(Node aa,Node bb){
	if(aa.sum < bb.sum)return true;
	else if(aa.sum == bb.sum && aa.no < bb.no)return true;
	return false;
}
Vis e;
Node de;

int main(){
	int t1;
	while(true){
		cin >> n;
		if(n==0)break;
		vector<Node> v;
		vector<Vis> v_m[25];
		for(int i = 1 ; i <= n ; i++){
			cin >> t1;
			cin >> temp;
			for(int j = 1 ; j <= temp ; j++){
				cin >> e.p >> e.num;
				//cout << e.p << e.num<<endl; 
				v_m[t1].push_back(e);
			}
		}
		//cout << "Â¼ÈëÍê±Ï"<<endl;
		while(true){
			cin >> temp;
			if(temp==0)break;
			Node d;
			d.no = temp;
			d.sum = 0;
			for(int i = 1 ; i <= n ; i++){
				cin >> temp1;
				map2[0][temp1] = i;
			}
			for(int i = 1 ; i <= n ; i++){
				cin >> temp1;
				map2[1][temp1] = i;
			}
			for(int i = 1 ; i <= n ;i ++){
				for(int j = 0 ; j < v_m[i].size() ; j++){
					d.sum = (abs(map2[0][i]-map2[1][v_m[i][j].p])+1)*v_m[i][j].num + d.sum;
				}
			}
			v.push_back(d);
		}
		cout << "Configuration Load"<<endl;
		sort(v.begin(),v.end(),cmp);
		for(vector<Node>::iterator it=v.begin();it!=v.end();it++)cout<<it->no<<" "<<it->sum<<endl;
	} 
	return 0;
}
	
