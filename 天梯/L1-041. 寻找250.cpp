
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-29 20:25:17
Version: 1.0
**************************************************************/
#include<stdio.h>
using namespace std;
int main()
{
	char a[10];
	int flag=0;
	int k=1;
	int x;
	while(~scanf("%s",a))
	{
		if(a[0]=='2'&&a[1]=='5'&&a[2]=='0'&&flag==0)
		{
			x=k;
			flag=1;
		}
		k++;
	}
	printf("%d\n",x);
	return 0;
}

