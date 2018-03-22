
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-19 19:50:52
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>

using namespace std;
int main(){
	for(int i = 20 ; i > 3 ; i--){
		for(int j = i-1 ; j >2 ; j--){
			for(int k = j-1 ; k >1 ; k--){
				for(int m = k-1 ; m > 0 ; m-- ){
					int a = i*j*k + i*j*m + i*k*m + j*k*m;
					int b = i* j * k * m;
					if(a==b)cout << i <<" "<<j<<" "<<k<<" "<<m<<endl;
				}
			}
		}
	}
	return 0;
}


/*int Xt,Yt;
int yue(int x,int m){
	if(m==0)return x;
	return yun(m,x%m);
}
bool test(int x,int y){
	Xt = Xt*y + x * Yt;
	Yt = y*Yt;
	int t = yue(y,y%x);
	Xt = Xt/t;
	Yt = Yt/t;
	if(Xt>Yt)return false;
	else (Xt<Yt)return true;
	if(Xt==Yt)printf("...");
} 
int main(){
	for(int i = 20 ; i > 4 ; i++){
		Xt = 0 ,Yt = 1;
		
	}
	return 0;
}*/

	
