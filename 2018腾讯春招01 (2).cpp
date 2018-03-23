#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
long long map[10000000];
//索引
int vis[1000000]; //时间来不及了 
int num = 0;
long long n;
void func(long long k,long long d){
	if(k==0)num++;
	for(long long i = d ; i <= k ; i = i * 2){
		if(map[i]>0){
			map[i]--;
			func(k-i,i);
			map[i]++;	
		}
	}
}
int main(){	
	fill(map,map+10000000,2);
	cin >> n;
	for(long long i = 1 ; i <= n ; i = i * 2){
		map[i]--;
		func(n-i,i);
		map[i]++;
	}
	cout << num;
	return 0;
}
