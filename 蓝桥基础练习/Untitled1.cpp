#include <iostream>
#include <string>
using namespace std;
void func(string str , int k){
	if(k==5){
		cout << str<<endl;
		return;
	}
	str[k]='0';
	func(str,k+1);
	str[k]='1';
	func(str,k+1);	
}
int main(){
	string str="00000";
	func(str,0);
	return 0;
}
