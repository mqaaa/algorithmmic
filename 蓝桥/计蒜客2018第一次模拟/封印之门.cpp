#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	string st,ans;
	cin >> st;
	cin >> ans;
	int n;
	int map[27][27] = {0};
	int temp1,temp2;
	char t1,t2;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> t1 >> t2;
		temp1 = t1-'a';
		temp2 = t2-'a';
		map[temp1][temp2] = 1;
		for(int j = 0 ; j < 26 ; j++){
			if(map[j][temp1]!=0){
				if(map[j][temp1]+1<map[j][temp2])map[j][temp2]=map[j][temp1]+1;
				else if(map[j][temp2]==0)map[j][temp2]=map[j][temp1]+1;
			}
		}
	}
	int sum = 0;
	for(int i = 0 ; i < st.length() ; i++){
		if(st[i]==ans[i])continue;
		int c = map[st[i]-'a'][ans[i]-'a'];
		if(c==0){
			cout<<"-1";
			return 0;
		}
		sum = sum + c;
	}
	cout << sum;
	return 0;
} 
