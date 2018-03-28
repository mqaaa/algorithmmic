#include<cstdio>
int main()
{
	int a,b,c,d,e,f,g,h;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		{
			if(a==b)continue;
			for(c=0;c<=9;c++)
			{
				if(c==a||c==b)continue;
				for(d=0;d<=9;d++)
				{
					if(d==a||d==b||d==c)continue;
					for(e=0;e<=9;e++)
					{
						if(e==a||e==b||e==c||e==d)continue;
						for(f=0;f<=9;f++)
						{
							if(f==a||f==b||f==c||f==d||f==e)continue;
							for(g=0;g<=9;g++)
							{
								if(g==a||g==b||g==c||g==d||g==e||g==f)continue;
								for(h=0;h<=9;h++)
								{
									if(h==a||h==b||h==c||h==e||h==f||h==d||h==f)continue;
									int sum1=a*1000+c*100+d*10+e;
									int sum2=b*1000+f*100+g*10+c;
									int sum3=b*10000+f*1000+d*100+c*10+h;
									if(sum1+sum2==sum3)
									{
										printf("%d %d %d %d",b,f,g,c);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

