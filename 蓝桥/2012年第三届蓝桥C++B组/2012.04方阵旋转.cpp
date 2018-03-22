
/*************************************************************
Author : qmeng
MailTo : qmeng1128@163.com
QQ     : 1163306125
Blog   : http://blog.csdn.net/Mq_Go/
Create : 2018-03-19 20:30:59
Version: 1.0
**************************************************************/
#include <cstdio>
#include <iostream>
#include <cstdlib>
using namespace std;
void rotate(int* x, int rank)
{
	int* y = (int*)malloc(sizeof(int)*rank*rank);  // МоїХ

	for(int i=0; i<rank * rank; i++)
	{
		y[4*(i%4)+3-i/4] = x[i];  // МоїХ
		cout << 4*(i%4)+(3-i/4)<<endl;
	}

	for(int i=0; i<rank*rank; i++)
	{
		x[i] = y[i];
	}

	free(y);
}

int main(int argc, char* argv[])
{
	int x[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int rank = 4;

	rotate(&x[0][0], rank);

	for(int i=0; i<rank; i++)
	{
		for(int j=0; j<rank; j++)
		{
			printf("%4d", x[i][j]);
		}
		printf("\n");
	}

	return 0;
}


	
