
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-17 09:13:38
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,r; 
int main(){
	scanf("%d %d",&n,&r);
	vector<int> v,v2;
	int temp;
	while(n){
		temp = n%r;
		n = n/r;
		v.push_back(temp);
	}
	if(v.size()==0){
		printf("0");
		return 0;
	}	
	v2 = v;
	reverse(v2.begin(),v2.end());
	if(v==v2)printf("Yes\n");
	else printf("No\n");
	cout << v2[0];
	for(int i = 1 ; i < v.size() ; i++){
		cout<<" "<<v2[i];
	}
	return 0;
}
	
