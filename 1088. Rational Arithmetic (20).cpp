
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-10 09:32:37
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string> 
#include <sstream>
using namespace std;
long int a,b,c,d;
long int fu0;
int fun(long int m,long int n){
	if(n==0){
		return m;
	}
	return fun(n,m%n);
}
string init(long int t_a,long int t_b){
	ostringstream stream;
	string str = "";
	bool key = false;
	if(t_a == 0)return "0";
	if(t_b == 0)return "Inf";
	if(t_a < 0 ){
		key = !key;
		t_a = 0-t_a;
	}
	if(t_b < 0 ){
		key = !key;
		t_b = 0-t_b;
	}
	double t_c = (double)t_a / t_b;
	if( t_c == t_a / t_b ){
			stream<<(int)t_c;
			str = stream.str();
	}else{
		//cout << t_a << " " << t_b <<endl;
		if((double)t_a/t_b > 1){
			stream<<t_a/t_b;
			str = stream.str();
			//cout<<str<<"----------"<<endl;
			str = str+" ";
			t_a = t_a-(t_a/t_b)*t_b;	
		}
		ostringstream stream1;
		int fu = fun(t_a,t_b);
		t_a = t_a /fu;
		t_b = t_b /fu;
		stream1<<t_a;
		str = str+stream1.str()+"/";
		ostringstream stream2;
		stream2<<t_b;
		str = str+stream2.str();
	}
	if(key)str = "(-" + str + ")";
	return str;
	
}
string plus0(long int t_a,long int t_b,long int t_c,long int t_d){
 	t_a = t_a * t_d + t_c * t_b;
	t_b = t_b * t_d;
	return init(t_a,t_b);	
}
string simple(long int t_a,long int t_b,long int t_c,long int t_d){
 	t_a = t_a * t_d - t_c * t_b;
	t_b = t_b * t_d;
	return init(t_a,t_b);	
}
string multiply(long int t_a,long int t_b,long int t_c,long int t_d){
 	t_a = t_a * t_c;
	t_b = t_b * t_d;
	return init(t_a,t_b);	
}
string division(long int t_a,long int t_b,long int t_c,long int t_d){
	t_a = t_a * t_d;
	t_b = t_b * t_c;
	return init(t_a,t_b);	
}
int main(){
	string str1,str2,str3;
	scanf("%ld/%ld %ld/%ld",&a,&b,&c,&d);
	str1 = init(a,b);
	str2 = init(c,d);
	str3 = plus0(a,b,c,d);
	cout<<str1<<" + "<<str2<<" = "<< str3 <<endl;
	cout<<str1<<" - "<<str2<<" = "<< simple(a,b,c,d)<<endl;
	cout<<str1<<" * "<<str2<<" = "<< multiply(a,b,c,d)<<endl;
	if(str2=="0")cout<<str1<<" / "<<str2<<" = Inf"<<endl;
	else cout<<str1<<" / "<<str2<<" = "<< division(a,b,c,d)<<endl;
	return 0;
}
	
