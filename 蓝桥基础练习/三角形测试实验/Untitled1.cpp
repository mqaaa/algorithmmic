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
			a = (rand()%(100-1))+1;  //׼���������� 
			b = (rand()%(100-1))+1;
			c = (rand()%(100-1))+1; 
			if(a<b+c&&b<a+c&&c<a+b){
				outfile<<a <<" "<<b<<" "<<c<<endl; 
			}else{
				i--;
			}	
		}
	}
	cout << "��������׼�����"<<endl; 
	outfile.close();
	/*
		����һ����Χ�������ͨ�ñ�ʾ��ʽ
		Ҫȡ��[a,b)�����������ʹ��(rand() % (b-a))+ a; 
		Ҫȡ��[a,b]�����������ʹ��(rand() % (b-a+1))+ a; 
		Ҫȡ��(a,b]�����������ʹ��(rand() % (b-a))+ a + 1; 
		ͨ�ù�ʽ:a + rand() % n�����е�a����ʼֵ��n�������ķ�Χ�� 
		Ҫȡ��a��b֮��������������һ�ֱ�ʾ��a + (int)b * rand() / (RAND_MAX + 1)�� 
		Ҫȡ��0��1֮��ĸ�����������ʹ��rand() / double(RAND_MAX)��
	*/
	
	int x=0,y=0,z=0;
	ifstream in;
	in.open("1.txt",ios::in);
	ofstream test;
	test.open("ans.txt",ios::app);
	while(!in.eof()){
		in >> a >> b >> c;
		if(a<b+c&&b<a+c&&c<a+b){
			if(a==b||b==c||a==c){  //�߽�ֵ���� 
				if(a==b&&a==c){
					x++;
					cout <<"a="<<a<<" b="<<b<<" c="<<c<<" �ȱ�������"<<endl;
					test<<"a="<<a<<" b="<<b<<" c="<<c<<" �ȱ�������"<<endl;
				}else{
					y++;
					cout <<"a="<<a<<" b="<<b<<" c="<<c<<" ����������"<<endl;
					test <<"a="<<a<<" b="<<b<<" c="<<c<<" ����������"<<endl;
				}  
			}else{
				z++;
				cout <<"a="<<a<<" b="<<b<<" c="<<c<<" ��ͨ������"<<endl; 
				test <<"a="<<a<<" b="<<b<<" c="<<c<<" ��ͨ������"<<endl; 
			}	 
		}
	}
	cout << x << " "<<y << " "<<z; 
	return 0;
} 
