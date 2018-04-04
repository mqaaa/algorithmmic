#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
	int a[35] = {0};
	int b[35] = {0};
	a[1] = 1;
	int n;
	cin >> n;
	cout << "1"<<endl;
	for(int i = 2 ; i <=n ; i++){
		a[1] = b[1] = 1;
		for(int j = 2 ; j < i ; j++){
			a[j]=b[j-1]+b[j];
		}
		a[i]=1;
		cout << a[1];
		for(int j = 2 ; j <= i ; j++){
			cout << " "<<a[j];
			b[j] = a[j]; 
		}
		cout << endl;
		memset(a,0,sizeof(a));
	}
	return 0;
}
