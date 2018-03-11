# algorithmmic
 - 备战：PAT&蓝桥杯
 - 日期：2018年1月11日
## 包含内容
### atoi---ASCII to integer,将字符串转换成整形，从数字或正负号开始转换，一直到非数字为止
```
#include<stdlib.h>
#include<stdio.h>
intmain(void)
{
  float n;
  char *str="12345.67";
  n = atoi(str);
  printf("string=%sinteger=%d\n",str, n);
 return 0;
}
```
```
#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
int main(){
	char *num;
	num = (char *)malloc(10*sizeof(char)); //申请空间
    cin>>num;
	double b;
	b = atof(num);
	cout<<b; 
	return 0;
}
```
itoa---integer to ASCII--将整形转换成字符串

atof---ascii to float--字符串转换成浮点型

atol---ascii to long---字符串转换成长整形

gcvt---浮点型转换成字符串（四舍五入）

strtod---字符串转换成浮点型

strtol---字符串转换成长整形

strtoul--字符串转换成无符号长整形

toascii---将整形转换成合法的ASCII码字符

_ttoi---可以将CString转换成整形

_itot_s---将int转换成char*


```
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
int main() 
{ 
char buffer[20]; 
int i = 3445; 
long l = -344115L; 
unsigned long ul = 1234567890UL;
_itoa( i, buffer, 10 ); 
printf( "String of integer %d (radix 10): %s\n", i, buffer ); 
_itoa( i, buffer, 16 ); 
printf( "String of integer %d (radix 16): 0x%s\n", i, buffer ); 
_itoa( i, buffer, 2 ); 
printf( "String of integer %d (radix 2): %s\n", i, buffer );
_ltoa( l, buffer, 16 ); 
printf( "String of long int %ld (radix 16): 0x%s\n", l, buffer );
_ultoa( ul, buffer, 16 ); 
printf( "String of unsigned long %lu (radix 16): 0x%s\n", ul, buffer ); 
}
```
### ①辗转相除法

```
int measure(int x, int y)
{	
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}
```
### ②辗转相减法

```
int measure(int a,int b)
{		
	while(a != b)
	{
		if(a>b)
		{
			a = a - b;
		}
		else 
		{
			b = b - a;
		}
	}
	return a;
}
```
### ③穷举法

```
int measure(int x,int y)
{
   	int temp = 0;
    for(temp = x ; ; temp-- )
    {
		if(x%temp == 0 && y%temp==0) 
	   		break; 
   	}
	return temp;
}                                                                                                                                                                                                                                                                                                                                                                                                                    
```
。。。





