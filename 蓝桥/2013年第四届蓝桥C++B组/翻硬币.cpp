#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
string str,ans;
vector<int> s,a;
int main(){
	int n = 0;
	cin >> str>>ans;
	int len = str.length();
	for(int i = 0 ; i < len ; i ++){
		if(str[i]=='*')s.push_back(1);
		else s.push_back(-1);
		if(ans[i]=='*')a.push_back(1);
		else a.push_back(-1);
	}
	for(int i = 0 ; i < len-1 ; i++){
		if(s[i]!=a[i]){
			s[i]=s[i] * -1;
			s[i+1]=s[i+1] * -1;
			n++;
		}
	}
	cout << n;
	return 0;
} 
