/*
5
45
345
2345
12345
*/
#include<stdio.h>
int main()
{
	int i,j,x;
	for(i=5;i>=1;i--)
	{
		x=i;
		for(j=5;j>=i;j--)
		{
			printf("%d",x++);
		}
		printf("\n");
	}
	return 0;
}
