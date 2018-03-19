/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-19 10:02:34
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string> 
#include <map>
#include <vector>
using namespace std;
struct node{
	string name;
	int grade,num;
};
bool cmp(node a,node b){
	if(a.grade != b.grade)return a.grade > b.grade;
	else if(a.num != b.num)return a.num < b.num;
	else return a.name < b.name;
}
map<string,int> map1;
vector<node> v;
int main(){
	int n;
	string str;
	int gra;
	string name;
	cin >> n;
	int k = 1;
	node tem;
	v.push_back(tem);
	for(int i = 0 ; i < n ;i++){
		cin >> str >> gra >> name;
		if(str[0]=='T')gra = gra*1.5;
		else if(str[0]=='B')gra = gra/1.5;
		transform(name.begin(),name.end(),name.begin(),::tolower);
		if(map1[name]){
			int temp = map1[name];
			v[temp].grade = v[temp].grade + gra;
			v[temp].num++;
		}else{
			node temp;
			temp.name = name;
			temp.grade = gra;
			temp.num = 1;
			v.push_back(temp);
			map1[name] = k++;
		}
	}
	sort(v.begin(),v.end(),cmp);
	int temp = -1;
	k = 1; 
	cout << v.size()-1 << endl;
	for(int i = 1 ; i < v.size() ; i++){
		if(v[i].grade == temp){
			cout <<k<<" "<< v[i].name <<" "<< v[i].grade <<" "<< v[i].num<<endl;
		}else{
			cout <<i<<" "<< v[i].name <<" "<< v[i].grade <<" "<< v[i].num<<endl;
			temp = v[i].grade;
			k = i;
		}
	}
	return 0;
}
	
