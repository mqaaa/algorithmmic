#include <iostream>
using namespace std;
int main(){
	for(int a = 0 ; a < 10 ; a++){
		for(int b = 0 ; b < 10 ; b++ ){
			for(int c = 0 ; c < 10 ; c++){
				for(int d = 0 ; d < 10 ; d++){
					if(a*2 + b*2 == c*10+d && c*3+d*3 == a*10 + b){
						cout << a << " "<<b <<" "<<c << " "<<d << endl;
					}
				}
			}
		}
	}
	return 0;
} 
