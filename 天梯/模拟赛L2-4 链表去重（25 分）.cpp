#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct node
{
    int key;
    int next;
}a[101000];

struct node2
{
    int address;
    int key;
}b[101000];

int m=0;
int vis[100100]={0};

void delet(int pre,int next)
{
    int f=0;
    if(next==-1)
        return ;
    if(vis[abs(a[next].key)]==0)
    {
        vis[abs(a[next].key)]=1;
    }
    else
    {
        a[pre].next=a[next].next;
        b[m].address=next;
        b[m].key=a[next].key;
        m++;
        f=1;
    }
    if(f)
        delet(pre,a[next].next);
    else
        delet(next,a[next].next);
}

void print1(int start)
{
    if(start==-1)
        return ;
    if(a[start].next==-1)
        printf("%05d %d %d\n",start,a[start].key,a[start].next);
    else
        printf("%05d %d %05d\n",start,a[start].key,a[start].next);
    print1(a[start].next);
}

void print2()
{
    for(int i=0;i<m-1;i++)
    {
        printf("%05d %d %05d\n",b[i].address,b[i].key,b[i+1].address);
    }
    printf("%05d %d -1\n",b[m-1].address,b[m-1].key);
}

int main()
{
    int n,start,tstart,key,tnext;
    scanf("%d%d",&start,&n);
    while(n--)
    {
        scanf("%d%d%d",&tstart,&key,&tnext);
        a[tstart].key=key;
        a[tstart].next=tnext;
    }
    delet(-1,start);

    print1(start);
    if(m>1)
        print2();

    return 0;
}

