#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
double a[1005];
int main()
{
    int n;
    double an1,c;
    scanf("%d",&n);
    scanf("%lf%lf",&a[0],&an1);
    a[1]=0;
    for(int i=2;i<=n+1;i++)
    {
        scanf("%lf",&c);
        a[i]=2*a[i-1]-a[i-2]+2*c;
    }
    printf("%.2f\n",(an1-a[n+1])/(n+1));
    return 0;
}

