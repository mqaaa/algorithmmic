#include <algorithm>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int num = 0;
	int a[9] = {1,2,3,4,5,6,7,8,9};
	do{
		int k = 0;
		
		for(int i = 0 ; i < 8 ; i++){
			k = a[i] + k*10;
			if(k>n)break;
			for(int j = i+1 ; j < 8 ; j++){
				int s=0,f=0;
				for(int d = i+1 ; d <= j ; d++){
					s = s*10 + a[d];
				}
				for(int d = j+1 ; d < 9 ; d++){
					f = f*10 + a[d];
				}
				if(s/f>n)break;
				cout << s << " "<<f<<endl;
				if(n-k==(double)(s/f))num++;
			}	
		}
	}while(next_permutation(a,a+9));
	cout << num;
	return 0;
}
