#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double n;
	cin >> n;
	int d,h,m;
	for(int i = 0 ; i < n ; i++){
		scanf("%d %d:%d",&d,&h,&m);
		if(d==0){
			printf("%d %02d:%02d",d,h,m);
			continue;
		} 
		cout << (d+1)/2<<" ";
		int sum = (d-1)%2 * 24*60 + h*60 + m;
		sum = sum /2;
		printf("%02d:%02d\n",sum/60,sum%60);
	}
	return 0;
}
