#include <iostream>
#include <string>
using namespace std;
int main(){
	string str = "A";
	int n;
	cin >> n;
	for(int i = 1 ; i < n ; i++){
		str = str + char('A'+i) + str;
	}
	cout << str;
	return 0;
} 
