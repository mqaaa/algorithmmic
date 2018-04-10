#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string str;
int num,len;
vector<char > V;
void func(vector<char> v,int k){
	if(k==len){
		if(v.size()==0)return;
		vector<char> rev = v;
		reverse(v.begin(),v.end());
		if(v==rev){
			num++;
		}
		return;
	}
	func(v,k+1);
	v.push_back(str[k]);
	func(v,k+1);
}
int main(){
	cin >> str;
	len = str.length();
	num = 0;
	func(V,0);
	cout << num;
	return 0;
} 
