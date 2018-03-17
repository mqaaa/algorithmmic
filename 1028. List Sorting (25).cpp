
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-17 14:42:06
Version: 1.0
**************************************************************/
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1000010;
struct score{
	string no;
	string name;
	int grade;
}stu[maxn];
bool cmp1(score a,score b)
{
	return a.no<=b.no;
}
bool cmp2(score a,score b){
     if(a.name!=b.name)return a.name<b.name;
     else return a.no<b.no;
}
bool cmp3(score a,score b)
{
	if(a.grade!=b.grade)return a.grade<b.grade;
	else return a.no<b.no;
}
int main()
{
	int n,non;
	scanf("%d%d",&n,&non);
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].no>>stu[i].name>>stu[i].grade;
	}
	if(non==1)
	{
		sort(stu,stu+n,cmp1);
		for(int i=0;i<n;i++)
		{
			cout<<stu[i].no<<" "<<stu[i].name<<" "<<stu[i].grade<<endl;
		}
	}else if(non==2){
		sort(stu,stu+n,cmp2);
		for(int i=0;i<n;i++)
		{
			cout<<stu[i].no<<" "<<stu[i].name<<" "<<stu[i].grade<<endl;
		}
	}else{
		sort(stu,stu+n,cmp3);
		for(int i=0;i<n;i++)
		{
			cout<<stu[i].no<<" "<<stu[i].name<<" "<<stu[i].grade<<endl;
		}
	}
	return 0;
}
 
	
