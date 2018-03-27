
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-23 16:41:43
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include<algorithm>
#include <string>
const int maxn=100005;
using namespace std;
int main(){
	int n;
	int hashtable[maxn];
	fill(hashtable,hashtable+maxn,0);
	int num;
	int u=0;
	scanf("%d",&n);
	getchar();
	string str;
	for(int i=0;i<n;i++)
	{
	   /*while(scanf("%d",&num)!=EOF)
	   {
	   	hashtable[u++]=num;
	   	
	   }*/
	   getline(cin,str);
	   cout << str << endl;
	   int temp = 0;
	   for(int j = 0 ; j < str.length() ; j++){
	   	if(str[j]<'9'&&str[j]>'0'){
	   		temp = temp*10 + str[j]-'0';
	   		//cout << temp << endl;
	   	}else{
			hashtable[temp]++;
			temp = 0;
	   	} 
	   }
	   	hashtable[temp]++;
	} 
	//cout << "1311315365"<<endl;
	//sort(hashtable,hashtable+u);
	
	int  l,m,k;
  
	for(int i=0;i<10;i++)
	{
		cout<<i<<" "<<hashtable[i]<<endl;
		if(hashtable[i]==2)
		{
		   l=i;
		}else if(hashtable[i]==0)
		{
			m=i;
		}
		if(hashtable[i]==1){
			k = m;
		}
	}
	printf("%d %d",l,k);
	return 0;
}
	
