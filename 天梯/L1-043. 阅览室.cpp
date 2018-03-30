
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 20:34:02
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
struct node{
	int id;
	int n;
	node(int id,int n):id(id),n(n){}
};
int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		int num = 0,sum = 0;
		int h,m,k;
		char c;
		vector<node > S;
		scanf("%d %c %d:%d",&k,&c,&h,&m);
		while(k!=0){
			if(c=='S')S.push_back(node(k,h*60+m));
			else{
				for(int f = 0 ; f < S.size() ; f++){
					if(S[f].id==k){
						sum = sum + h*60+m - S[f].n;
						num++;
						break;
					}
				}
			}
			scanf("%d %c %d:%d",&k,&c,&h,&m);
		}
		if(num!=0)cout<<num<<" "<<(int)(((double)sum/num)+0.5)<<endl;
		else cout<<"0 0"<<endl;
		
	}
	return 0;
}
	
