
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-28 17:16:59
Version: 1.0
**************************************************************/
#include <bits/stdc++.h>
using namespace std;
double num[35][35];
int main()
{
    for(int i=1;i<=29;i++)
        for(int j=1;j<=i;j++)
        cin>>num[i][j];
    for(int i=1;i<=29;i++)
        for(int j=1;j<=i;j++)
    {
        num[i+1][j]+=num[i][j]/2;
        num[i+1][j+1]+=num[i][j]/2;
    }
    double maxn=-1;
    double minn=0x3f3f3f;
    for(int i=1;i<=30;i++)
    {
        if(maxn<num[30][i]) maxn=num[30][i];
        if(minn>num[30][i]) minn=num[30][i];
    }
    printf("%lf",maxn*2086458231/minn);
}
