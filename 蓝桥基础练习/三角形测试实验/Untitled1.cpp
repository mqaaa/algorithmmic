#include <iostream>
#include <cstdlib>
#include <fstream> 
#include <ctime>
#include <windows.h> 
using namespace std;
int main(){
	srand((unsigned)time(NULL)); 
	int a,b,c;
	int n;
	cin >> n;
	fstream outfile;
	outfile.open("1.txt");
	if(!outfile)cout<<"ERROR"<<endl;
	else{
		for(int i = 0 ; i < n ; i++){
			a = (rand()%(100-1))+1;  //准备测试用例 
			b = (rand()%(100-1))+1;
			c = (rand()%(100-1))+1; 
			if(a<b+c&&b<a+c&&c<a+b){
				outfile<<a <<" "<<b<<" "<<c<<endl; 
			}else{
				i--;
			}	
		}
	}
	cout << "测试用例准备完成"<<endl; 
	outfile.close();
	/*
		产生一定范围随机数的通用表示公式
		要取得[a,b)的随机整数，使用(rand() % (b-a))+ a; 
		要取得[a,b]的随机整数，使用(rand() % (b-a+1))+ a; 
		要取得(a,b]的随机整数，使用(rand() % (b-a))+ a + 1; 
		通用公式:a + rand() % n；其中的a是起始值，n是整数的范围。 
		要取得a到b之间的随机整数，另一种表示：a + (int)b * rand() / (RAND_MAX + 1)。 
		要取得0～1之间的浮点数，可以使用rand() / double(RAND_MAX)。
	*/
	
	int x=0,y=0,z=0;
	ifstream in;
	in.open("1.txt",ios::in);
	ofstream test;
	test.open("ans.txt",ios::app);
	while(!in.eof()){
		in >> a >> b >> c;
		if(a<b+c&&b<a+c&&c<a+b){
			if(a==b||b==c||a==c){  //边界值分析 
				if(a==b&&a==c){
					x++;
					cout <<"a="<<a<<" b="<<b<<" c="<<c<<" 等边三角形"<<endl;
					test<<"a="<<a<<" b="<<b<<" c="<<c<<" 等边三角形"<<endl;
				}else{
					y++;
					cout <<"a="<<a<<" b="<<b<<" c="<<c<<" 等腰三角形"<<endl;
					test <<"a="<<a<<" b="<<b<<" c="<<c<<" 等腰三角形"<<endl;
				}  
			}else{
				z++;
				cout <<"a="<<a<<" b="<<b<<" c="<<c<<" 普通三角形"<<endl; 
				test <<"a="<<a<<" b="<<b<<" c="<<c<<" 普通三角形"<<endl; 
			}	 
		}
	}
	cout << x << " "<<y << " "<<z; 
	return 0;
} 
