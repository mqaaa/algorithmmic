#include <iostream>
#include <cstdio>
using namespace std;
bool vis[100000] = {false};
int main(){
	int n;
	cin >> n;
	if(1<=n&&n<=3){
		cout << "0";
		return 0;
	}
	if(n<=5){
		cout<<"1";
		return 0; 
	}
	for(int i = 2 ; i < n ; i++){
		if(vis[i]==false){
			for(int j = i+1 ; j < n ; j++){
				if(vis[j]==false){
					for(int k = j+1 ; k < i+j ; k++){
						vis[k]=true;
					}
				}
			}
		}
	}
	int num = 0;
	for(int i = 0 ; i <= n ; i++){
		if(vis[i]==true)num++;
	}
	cout << num;
	return 0;
}
