#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 1 ; i < 10 ; i++){
		for(int j = 0 ; j < 10 ; j++){
			for(int k = 0 ; k < 10 ; k++){
				if(i+i+j+j+k == n){
					printf("%d%d%d%d%d\n",i,j,k,j,i);	
				}
			}
		}
	}
	for(int i = 1 ; i < 10 ; i++){
		for(int j = 0 ; j < 10 ; j++){
			for(int k = 0 ; k < 10 ; k++){
				if(i+i+j+j+k+k == n){
					printf("%d%d%d%d%d%d\n",i,j,k,k,j,i);	
				}
			}
		}
	}
	return 0;
}
