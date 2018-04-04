#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int temp;
	int min = 10001;
	int max = -10001;
	int sum = 0; 
	for(int i = 0 ; i < n ; i++){
		cin >> temp;
		if(temp>max)max = temp;
		if(temp<min)min = temp;
		sum = sum + temp;
	} 
	cout << max << endl;
	cout << min << endl;
	cout << sum << endl; 
	return 0;
}
