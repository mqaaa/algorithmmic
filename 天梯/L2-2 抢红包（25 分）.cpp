#include <bits/stdc++.h>
using namespace std;
struct node
{
    double data;
    int id;
    int count;
} a[10000+100];
int cmd(struct node a,struct node b)///�ȽϺ���
{
    if(a.data != b.data)
        return a.data > b.data;///�������
    else if(a.count != b.count)
        return a.count > b.count ;/// ��������� ����
    else if(a.id != b.id)
        return a.id < b.id ;/// �û��������
}
int main()
{
    int N;
    scanf("%d",&N);///N���˷����
    for(int i=0; i<=N; i++)
    {
        a[i].data=0;
        a[i].count=0;
        a[i].id=i;
    }
    for(int i=1; i<=N; i++)///��������
    {
        int t;
        scanf("%d",&t);
        double sum=0;
        for(int j=1; j<=t; j++)
        {
            int id;
            scanf("%d",&id);
            double count=0;
            scanf("%lf",&count);
            a[id].data+=count/100.0;/// �ӡ��֡� ת���ɡ�Ԫ��
            a[id].count++;
            sum+=count;
        }
        a[i].data-=sum/100.0;
    }
    sort(a+1,a+N+1,cmd);///����
    for(int i=1; i<=N; i++)
    {
        printf("%d %.2lf\n",a[i].id,a[i].data);
    }
    return 0;
}
