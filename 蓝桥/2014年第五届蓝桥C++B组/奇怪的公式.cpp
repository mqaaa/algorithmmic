#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define eps 10e-10
int main(){
	int a,b,c,d;
	int num = 0;
	for(a = 1 ; a < 10 ; a++){
		for(b = 1 ; b < 10 ; b++){
			if(a!=b){
				for(c = 1 ; c < 10 ; c++){
					for(d = 1 ; d < 10 ; d++){
						if(c!=d&&a!=c&&b!=d){
							if(((a*10 + c)*1.0/(b*10+d) - (a*c*1.0)/(b*d))==0){  
                       			cout << (a*10 + c)<<" "<<(b*10+d) <<" "<<(a*c*1.0)<<" "<<(b*d)<<endl;
								num++;  
                    		}  
						}
					}
				}
			}
		}
	}
	cout << num;
	return 0;
} 
