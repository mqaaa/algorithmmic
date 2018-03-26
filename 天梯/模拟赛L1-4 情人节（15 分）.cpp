#include<stdio.h>
#include<string.h>
char a[10000][20];
int main()
{
    int cnt=0;
    while(scanf("%s",a[cnt])==1&&a[cnt][0]!='.')
    {
        cnt++;
    }
    if(cnt<2)
    printf("Momo... No one is for you ...\n");
    else if(cnt<14)
    printf("%s is the only one for you...\n",a[1]);
    else 
    printf("%s and %s are inviting you to dinner...\n",a[1],a[13]);
}
