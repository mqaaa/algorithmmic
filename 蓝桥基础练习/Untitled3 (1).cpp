#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	string a,b;
	cin >> a >> b;
	if(a.length()==b.length()){
		if(a==b){
			cout<<"2"<<endl;
		}else{
			//transfrom(a.begin(),a.end(),)
			for(int i = 0 ; i < a.length() ; i++){
				if(abs(a[i]-b[i])!=32&&abs(a[i]-b[i])!=0){
					cout<<"4"<<endl;
					return 0;
				}
			}
			cout<<"3"<<endl;
		}
	}else{
		cout << "1" <<endl;
	}
	return 0;
}
