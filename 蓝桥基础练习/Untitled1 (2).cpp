#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	int a1,b1,a2,b2;
	int c1,d1,c2,d2;
	vector<int> x(5);
	vector<int> y(5);
	cin >> x[1] >> y[1] >> x[2] >> y[2];
	cin >> x[3] >> y[3] >> x[4] >> y[4];
	sort(x.begin()+1,x.end());
	sort(y.begin()+1,y.end());
	double sum = abs((x[2]-x[3])*(y[2]-y[3]));
	printf("%0.2lf",sum);
	return 0;
} 
