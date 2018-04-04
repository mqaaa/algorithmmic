#include <iostream>
#include <vector>
#include <string> 
using namespace std;
int func(char k){
	if(k>='0'&&k<='9')return k-'0';
	else return k-'A'+10;
}
int main(){
	string str;
	cin >> str;
	int sum = 0;
	for(int i = 0 ; i<str.length() ; i++){
		sum = sum*16 + func(str[i]);
	}
	cout << sum<<endl;
	char t = 'A';
	cout <<(int)t<<endl;
	return 0;
}
