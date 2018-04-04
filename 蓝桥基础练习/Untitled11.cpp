#include <iostream>
#include <string>
#include <vector> 
using namespace std;
void func(string k){
	int sum = 0;
	if(k[0]=='1')sum += 4;
	if(k[1]=='1')sum += 2;
	if(k[2]=='1')sum += 1;
	cout << sum;
}
int main(){
	int n;
	cin >> n;
	string str;
	for(int i = 0 ; i < n ; i++){
		cin >> str;
		string ans = "";
		int len = str.length();
		for(int j = 0 ; j < len ; j++){
			switch(str[j]){
				case '0':ans = ans+"0000";break;
				case '1':ans = ans+"0001";break;
				case '2':ans = ans+"0010";break;
				case '3':ans = ans+"0011";break;
				case '4':ans = ans+"0100";break;
				case '5':ans = ans+"0101";break;
				case '6':ans = ans+"0110";break;
				case '7':ans = ans+"0111";break;
				case '8':ans = ans+"1000";break;
				case '9':ans = ans+"1001";break;
				case 'A':ans = ans+"1010";break;
				case 'B':ans = ans+"1011";break;
				case 'C':ans = ans+"1100";break;
				case 'D':ans = ans+"1101";break;
				case 'E':ans = ans+"1110";break;
				case 'F':ans = ans+"1111";break;
			}
		}
		len = ans.length();
		if(len%3==1)ans = "00" + ans;
		else if(len%3==2)ans = "0" + ans;
		string temp;
		temp = ans.substr(0,3);
		if(temp!="000")func(temp);
		for(int j = 3 ; j < ans.length() ; j+=3){
			temp = ans.substr(j,3);
			func(temp);		
		}
		cout << endl;
	}
/*	int n;
	string str,ans="";
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> str;
		vector<int> v1,v2;
		int len = str.length();
		int temp;
		for(int j = 0 ; j < len ; j++){
			temp = func(str[j]);
			for(int j = 3 ; j >= 0 ; j--){
				v1.push_back(temp%2);
				temp = temp/2;
			}
		}
		for(int k = 0 ; k < v1.size() ; k++ )cout <<v1[k];
		cout <<"\n"<<endl;
		len = v1.size();
		int sum = 0;
		for(int i = 0 ; i < len ; i++){
			if(i%3==0){
				v2.push_back(sum);
				sum = 0;
			}
			sum = sum*2+v1[i];
		}
		if(sum!=0)v2.push_back(sum);
		for(int i = v2.size()-1 ; i>=0 ; i--)cout<<v2[i];
		cout << endl;
	}
*/	
}
