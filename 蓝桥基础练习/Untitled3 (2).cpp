#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int v1,v2,t,s,l;
	cin >> v1 >> v2 >>t>> s >> l;
	int r=0,e=0;
	int temp = 0;
	int m = 0;
	while(true){
		m++;
		e = e+v2;
		if(temp==0){
			r = r+v1;
			if(r-e>=t)temp = s; 
		}else temp--;
		if(r>=l||e>=l)break; 
	}
	if(r>=l&&e>=l)cout<<"D"<<endl;
	else if(r>=l)cout<<"R"<<endl;
	else cout <<"T"<<endl;
	cout<<m;
	return 0;
}
