#include <iostream>
#include <cstdio>
using namespace std;
int num = 0;
void dfs(int a,int b,int sum){
	if(a==0&&b==0&&sum==0)num++;
	if(a>=1&&sum>0)dfs(a-1,b,sum*2);
	if(b>=1&&sum>0)dfs(a,b-1,sum-1);
}
int main(){
	int sum = 2;
	int a = 5;
	int b = 10;
	dfs(a-1,b,sum*2);
	dfs(a,b-1,sum-1);
	cout << num; 
	return 0;
}
