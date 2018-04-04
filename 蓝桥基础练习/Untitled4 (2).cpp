#include <iostream>
#include <string>
using namespace std;
int map[205][205];
int main(){
	int x,y;
	int num = 0;
	cin >> x >> y;
	for(int i = 0 ; i< x ; i++)for(int j = 0 ; j < y ; j++)cin >> map[i][j];
	int kx = 0 , ky = 0;
	while(num < x*y){
		for(int i = kx ; i < x - kx ; i++){cout<<map[i][ky];num++;if(num<x*y)cout<<" ";}
		for(int i = ky+1 ; i < y - ky ; i++){cout<<map[x-1-kx][i];num++;if(num<x*y)cout<<" ";}
		for(int i = x-kx-2 ; i >= kx ; i--){cout<<map[i][y-ky-1];num++;if(num<x*y)cout<<" ";}
		for(int i = y-ky-2 ; i >= ky+1 ; i--){cout <<map[kx][i];num++;if(num<x*y)cout<<" ";}
		kx++;ky++;
	}
	return 0;
} 
