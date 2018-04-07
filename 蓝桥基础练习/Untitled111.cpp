#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int temp = n /(2*m);
	cout << temp * m*m;
	return 0;
} 
