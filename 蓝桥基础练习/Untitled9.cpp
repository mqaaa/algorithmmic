#include <iostream>
#include <vector>
using namespace std;
int main(){
	char map[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int n;
	cin >> n;
	if(n==0){
		cout <<0;
		return 0;
	}
	vector<char> v;
	while(n){
		v.push_back(map[n%16]);
		n = n/16;
	}
	for(int i = v.size()-1 ; i >=0 ; i--)cout<<v[i];
	return 0;
}
