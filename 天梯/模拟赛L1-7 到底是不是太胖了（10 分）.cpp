#include<stdio.h>
#include<iostream>
using namespace std;
double a(double b)
{
    if(b<0)b*=-1.0;
    return b;
}
int main()
{
    int T;
    cin>>T;
    double h,w,ww;
    while(T--)
    {
        cin>>h>>w;
        ww=(h-100.0)*0.9*2.0;
        if(a(w-ww)+0.0000001<ww*0.1)
        printf("You are wan mei!\n");
        else if(w<ww)
        printf("You are tai shou le!\n");
        else 
        printf("You are tai pang le!\n");
    }
    return 0;
}
