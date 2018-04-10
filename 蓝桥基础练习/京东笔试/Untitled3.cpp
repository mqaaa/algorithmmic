#include <iostream>
#include <cstdio>
using namespace std;
int n;
int num=0;
int X = 7,Y=9;
int _X,_Y;
void func(int x,int y,int k){
	
	if(k==n){
		if(x==_X&&y==_Y)num++;
		if(num==1000000007)num=0;
		return;
	}
	int temp_x,temp_y;
	temp_x = x-1;
	temp_y = y-2;
	if(temp_x>=-1&&temp_y>=0){
		func(temp_x,temp_y,k+1);
	}
	temp_x = x+1;
	temp_y = y-2;
	if(temp_x<=X&&temp_y>=0){
		func(temp_x,temp_y,k+1);
	}
	temp_x = x-1;
	temp_y = y+2;
	if(temp_x>=-1&&temp_y<=Y){
		func(temp_x,temp_y,k+1);
	}
	temp_x = x+1;
	temp_y = y+2;
	if(temp_x<=X&&temp_y<=Y){
		func(temp_x,temp_y,k+1);
	}
	temp_x = x-2;
	temp_y = y-1;
	if(temp_x>=0-1&&temp_y>=0){
		func(temp_x,temp_y,k+1);
	}
	temp_x = x+2;
	temp_y = y-1;
	if(temp_x<=X&&temp_y>=0){
		func(temp_x,temp_y,k+1);
	}
	temp_x = x-2;
	temp_y = y+1;
	if(temp_x>=-1&&temp_y<=Y){
		func(temp_x,temp_y,k+1);
	}
	temp_x = x+2;
	temp_y = y+1;
	if(temp_x<=X&&temp_y<=Y){
		func(temp_x,temp_y,k+1);
	}
}
int main(){
	cin >> n;
	cin >> _X >> _Y;
	func(0,0,0);
	cout << num;
	return 0;
} 
