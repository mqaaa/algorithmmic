#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int > v(n);
	for(int i = 0 ;i < n ; i++)cin >> v[i];
	int temp;
	cin >> temp;
	for(int i = 0 ; i < n ; i++){
		if(v[i]==temp){
			cout << i+1;
			return 0;
		}
	}
	cout << "-1";
	return 0;
}
