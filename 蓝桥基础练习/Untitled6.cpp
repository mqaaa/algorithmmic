#include <iostream>
using namespace std;
int main(){
	int sum = 0;
	for(int i = 1 ; i < 10 ; i++){
		for(int j = 0 ; j < 10 ; j++){
			for(int k = 0 ; k < 10 ; k++){
				if(i*i*i+k*k*k+j*j*j==i*100+j*10+k){
					cout << i*100+j*10+k<<endl;
				}
			}
		}
	}
	return 0;
}
