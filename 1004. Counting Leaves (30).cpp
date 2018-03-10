
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-10 09:10:14
Version: 1.0
**************************************************************/
#include <iostream>

using namespace std;
int node[100][100]={0};
int array[100];
int main()
{
    int N,M,ID,K;
    cin>>N>>M;
    int i=0;
    while(i<M)
    {
        cin>>ID>>K;
        int j=0;
        while(j<K)
        {
            cin>>node[ID][j];
            j++;
        }
        i++;
    }
    array[0]=1;
    int first=1;
    int front=0,rear=1;
    while(front<rear)
    {
        int tag=rear;
        int cnt=0;
        
        while(front<tag)
        {
            int i=0;
            if(node[array[front]][0]==0)cnt++;
            else
            {
                while(node[array[front]][i])
                {
                    array[rear++]=node[array[front]][i];
                    i++;
                }
            }
            front++;
        }
        if(first)first=0;
        else cout<<" ";
        cout<<cnt;
    }
    cout<<endl;
    return 0;
}

