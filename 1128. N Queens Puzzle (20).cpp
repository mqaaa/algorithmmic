
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-17 17:53:09
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <set> 
using namespace std;
int main(){
	int n,k,temp;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++){
		bool flag = true;
		set<int> s1,s2,s3;
		scanf("%d",&k);
		int j;
		for(j = 1 ; j <= k ; j++){
			scanf("%d",&temp);
			s1.insert(j+temp);
			s2.insert(j-temp);
			s3.insert(temp);
			if(s1.size() != j || s2.size()!= j || s3.size() != j)flag = false;
		}
		if(flag)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
	
