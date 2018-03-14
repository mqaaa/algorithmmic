
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-13 19:52:32
Version: 1.0
**************************************************************/
#include <cstdio>
#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int n,p,f;
bool key[10005][10005] = {false};
vector<int> v[10000];
struct Node{
	int a,b;
};
bool cmp(Node x,Node y){
	return x.a!=y.a ? x.a<y.a : x.b <y.b;
}
int main(){
	scanf("%d %d",&n,&p);

	int temp1,temp2;
	for(int i = 0 ; i < p ;i++){
		scanf("%d %d",&temp1,&temp2);
		if((temp1>0&&temp2>0)||(temp1<0&&temp2<0)){
			temp1 = abs(temp1),temp2 = abs(temp2);
			v[temp1].push_back(temp2);
			v[temp2].push_back(temp1);
			key[temp1][temp2] = true;
			key[temp2][temp1] = true;
		}else{
			temp1 = abs(temp1),temp2 = abs(temp2);
			key[temp1][temp2] = true;
			key[temp2][temp1] = true;
		}
	}
	scanf("%d",&f);
	for(int i = 0 ; i < f ; i++){
		scanf("%d %d",&temp1,&temp2);
		Node ans; 
		vector<Node> an;
		temp1 = abs(temp1),temp2 = abs(temp2);
		int num1 = v[temp1].size();
		int num2 = v[temp2].size();
		for(int j = 0 ; j < num1 ; j++){
			for(int k = 0 ; k < num2 ; k++){
				if(v[temp1][j]==temp2||v[temp2][k]==temp1)continue;
				if(key[v[temp1][j]][v[temp2][k]]==true){
					ans.a = v[temp1][j],ans.b = v[temp2][k];
					an.push_back(ans); 	
				}
			}
		}
		sort(an.begin(),an.end(),cmp);
		printf("%d\n", int(an.size()));
        for(int j = 0; j < an.size(); j++)
            printf("%04d %04d\n", an[j].a, an[j].b);
	}
	return 0;
}


	
