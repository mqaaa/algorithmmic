
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-14 14:45:37
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct stu{
	string name;
	int a;
	int b;
	int grade;
}; 
bool cmp(stu s1,stu s2){
	return s1.grade!=s2.grade ? s1.grade>s2.grade : s1.a!=s2.a ? s1.a > s2.a : s1.name < s2.name;
}
int n,t1,t2;
vector<stu> ss,sm,mm,ms;
int main(){
	cin >> n >> t1 >> t2;
	stu s;
	int k = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> s.name >> s.a >> s.b;
		s.grade = s.a + s.b;
		if(s.a>=t1 && s.b>=t1){
			if(s.a>=t2 && s.b>=t2){ss.push_back(s);
			}else if(s.a>=t2){sm.push_back(s);
			}else if(s.b<s.a){mm.push_back(s);
			}else{ms.push_back(s);
			}
			k++;
		}
	}
	cout << k << endl;
	sort(ss.begin(),ss.end(),cmp);
	for(int i = 0 ; i < ss.size() ; i++)cout<<ss[i].name<<" "<<ss[i].a<<" "<<ss[i].b<<endl;
	sort(sm.begin(),sm.end(),cmp);
	for(int i = 0 ; i < sm.size() ; i++)cout<<sm[i].name<<" "<<sm[i].a<<" "<<sm[i].b<<endl;
	sort(mm.begin(),mm.end(),cmp);
	for(int i = 0 ; i < mm.size() ; i++)cout<<mm[i].name<<" "<<mm[i].a<<" "<<mm[i].b<<endl;
	sort(ms.begin(),ms.end(),cmp);
	for(int i = 0 ; i < ms.size() ; i++)cout<<ms[i].name<<" "<<ms[i].a<<" "<<ms[i].b<<endl;
	return 0;
}
	
