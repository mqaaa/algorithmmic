
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-11 22:06:14
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map> 
#include <algorithm>
using namespace std;
struct Stu{
	string name;
	int Gp;
	int Gm;
	int Gf;
	int grade;
	Stu(){
		Gp = Gm = Gf = grade = -1;
	}
};
vector<Stu> v;
map<string,int> ma;
bool cmp(Stu a,Stu b){
	if(a.grade > b.grade)return true;
	if(a.grade == b.grade){
		if(a.name < b.name)return true;
	}
	return false;
}
int main(){
	string str;
	int p,m,f,temp;
	cin >> p >> m >> f;
	for(int i = 0 ; i < p ; i++){
		Stu stu;
		cin >> stu.name;
		cin >> stu.Gp;
		v.push_back(stu);
		//m.insert(pair<string,int>(stu.name,i));
		ma[stu.name]=i;
	}
	for(int i = 0 ; i < m ; i++){
		cin >> str;
		int k = ma[str];
		cin >> v[k].Gm;
	}
	for(int i = 0 ; i < f ; i++){
		cin >> str;
		int k = ma[str];
		cin >> v[k].Gf;
		if(v[k].Gf >= v[k].Gm){
			v[k].grade = v[k].Gf;
		}else{
			v[k].grade = ((double)v[k].Gm*0.4 + (double)v[k].Gf*0.6) + 0.5; 
		}
	}
	sort(v.begin(),v.end(),cmp);
	for(int i = 0 ; i < v.size() ; i++){
		if(v[i].Gp>=200&&v[i].grade>=60)
		cout << v[i].name << " "<<v[i].Gp <<" "<<v[i].Gm<<" "<<v[i].Gf<<" "<<v[i].grade<<endl;
	}
	return 0;
}
	
