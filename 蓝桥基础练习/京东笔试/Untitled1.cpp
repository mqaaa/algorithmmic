#include <iostream>
#include <cstdio>
using namespace std;
//最小公倍数
int n;
int func2(int a,int b){
	if(b!=0){
		return func2(b,a%b);
	}else{
		return a;
	}
}
long long func(int a,int b){
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	return max/func2(a,b)*min;  
} 
int main(){
	cin >> n;
	int temp = func(n,n-1);
	for(int i = n-2 ; i > 0 ; i--){
		temp = func(i,temp)%987654321;
	}
	cout << temp;
	return 0;
}
