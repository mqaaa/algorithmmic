#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin >> n >> k;
	int j = 0;
	for(int i= 0 ; i < n ; i++){
		int num = 0;
		for(int f = j ; f >0 && num < k ; f--){
			cout<<char('A'+f);
			num++;
		}
		for(int d = 0 ; d < k-j ; d++){
			cout<<char('A'+d);
		}
		j++;
		cout << endl;
	}
	return 0;
}
//·½·¨¶þ
int main(){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < k ; j++){
			cout<<(char)('A'+abs(i-j));
		}
		cout<< endl;
	}
} 
