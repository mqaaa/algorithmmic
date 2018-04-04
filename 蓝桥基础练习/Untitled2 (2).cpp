#include <iostream>
#include <cstdio>
using namespace std;
int map[110][110]; 
int main(){
	int n,temp;
	cin >> n;
	bool flag = false;
	for(int i = 0 ; i < n ; i++){
		int sum = 0;
		for(int j = 0 ; j < n ;j++){
			cin >> temp;
			if(temp==1)sum++;
		}
		sum--;
		if(sum>=n/2){
			if(flag)cout<<" ";
			flag = true;
			cout << i+1;
		}
	}
	return 0;
} 
