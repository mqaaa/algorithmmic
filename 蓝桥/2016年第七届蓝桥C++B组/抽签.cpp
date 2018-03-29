
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-28 21:31:14
Version: 1.0
**************************************************************/


#include <stdio.h>  
#define N 6  
#define M 5  
#define BUF 1024  
  
void f(int a[], int k, int m, char b[])  
{  
    int i,j;  
      
    if(k==N){   
        b[M] = 0;  
        if(m==0) printf("%s\n",b);  
        return;  
    }  
      
    for(i=0; i<=a[k]; i++){  
        for(j=0; j<i; j++) b[M-m+j] = k+'A';  
        printf("------%s\n",b);
        f(a,k+1,m-j,b);  //Ìî¿ÕÎ»ÖÃ  
    }  
}  
int main()  
{     
    int  a[N] = {4,2,2,1,1,3};  
    char b[BUF];  
    f(a,0,M,b);  
    return 0;  
}  
	
