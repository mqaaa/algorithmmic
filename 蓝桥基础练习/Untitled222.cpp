#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
vector<int > v(100);
int length;
int a,b,x,y;
int X,Y;
long long num = 0;
void func(int l){
	if(l==0){
		if(y==0){
			y=-1;
		}
		v[x] = y;
		return;
	}
	if(l>=a&&x>0){
		x--;
		func(l-a);
		x++;
	}
	if(l>=b&&y>0){
		y--;
		func(l-b);
		y++;
	}
}
int c(int t,int d){
	int t_min = d-t<t?d-t:t;
	long t1 = 1 ,t2 = 1;
	int temp = 0;
	for(int i = d ;temp<t_min; i--,temp++ )t1*=i;
	for(int i = 1 ; i<= t_min ; i++ )t2*=i;
	return t1/t2; 
}
int main(){
	cin >> length;
	cin >> a >> x >> b >> y;
	X = x,Y=y;
	func(length);
	int temp;
	for(int i = 0 ; i < 100 ; i++){
		if(v[i]!=0){
			if(v[i]==-1)v[i]=0;
			temp = c(i,X)%1000000007 * c(v[i],Y)%1000000007;
			num = (num+temp)%1000000007;
		}
	}
	cout << num;
	return 0;
}
