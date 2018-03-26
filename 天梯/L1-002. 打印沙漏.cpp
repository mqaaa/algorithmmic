
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-24 09:05:30
Version: 1.0
**************************************************************/
#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string.h>
#include<cmath>
using namespace std;
int main() {
    int N,i,j;char a;
    cin>>N>>a;
    int k = sqrt ((N+1)/2);
    for (i=1; i<=k; i++) {
        for (j =1; j<i; j++) {
            printf(" ");
        }
        for (j = 2* (k - i) + 1; j >= 1; j--) {
            printf("%c",a);
        }
        puts("");
    }
    for (i=1; i<=k-1; i++) {
        for (j=1; j<=k-i-1; j++) {
            printf(" ");
        }
        for (j=1; j<=2*i+1; j++) {
            printf("%c",a);
        }
        puts("");
    }
    cout<<N-(1+2*k-1)*k+1<<endl;
    return 0;
}

	
