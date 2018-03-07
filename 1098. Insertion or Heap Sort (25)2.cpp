#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=105;
int fir[maxn],vir[maxn];
int n;
void downadjust(int low,int high)
{
	int i=low,j=i*2;
	while(j<=high)
	{
		if(j+1<=high&&vir[j+1]>vir[j])
		{
			j=j+1;
		}
		if(vir[j]>vir[i])
		{
			swap(vir[j],vir[i]);
			i=j;
			j=i*2;
		}else{
			break;
		}
	}
}

void heapsort(int k){
	swap(vir[1],vir[k]);
	downadjust(1,k-1);
	for(int i=1;i<=n;i++)
	{
		printf("%d",vir[i]);
		if(i<n)printf(" ");
	}
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&fir[i]);
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&vir[i]);
	}
	int m,p;
	for(m=1;m<=n;m++)
	{
		if(vir[m-1]>vir[m])
		break;
	}
	p=m;
	for(;m<=n;m++)
	{
		if(vir[m]!=fir[m])
		break;
	}
	
	if(m==n+1)
	{
		printf("Insertion Sort\n");
		sort(vir+1,vir+p+1);
		for(int i=1;i<=n;i++)
		{
			printf("%d",vir[i]);
			if(i<n)printf(" ");
		}
	}else{
		printf("Heap Sort\n");
		int k;
		for(k=n;k>1;k--)
		{
			if(vir[k-1]>vir[k])
			break;
		}
		heapsort(k);
	}
	return 0;
}

