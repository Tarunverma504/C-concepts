// to check wheater the number contain dublicate or not
#include<stdio.h>
int main()
{
	int n,t,a1,a2,a3,a4,a5,a6,a7,a8,a9;
	scanf("%d",&n);
	a1=a2=a3=a4=a5=a6=a7=a8=a9=0;
	while(n>0)
	{
		t=n%10;
		if(t==1)
		{
			a1=a1+1;
		}
			if(t==2)
		{
			a2=a2+1;
		}
			if(t==3)
		{
			a3=a3+1;
		}
			if(t==4)
		{
			a4=a4+1;
		}
			if(t==5)
		{
			a5=a5+1;
		}
			if(t==6)
		{
			a6=a6+1;
		}
			if(t==7)
		{
			a7=a7+1;
		}
			if(t==8)
		{
			a8=a8+1;
		}
			if(t==9)
		{
			a9=a9+1;
		}
		n=n/10;
	}
		if(a1>1||a2>1||a3>1||a4>1||a5>1||a6>1||a7>1||a8>1||a9>1)
		{
			printf("the number contains dublicate");
		}
		else
		{
			printf("the number does not contain any dublicate");
		}
	
	return 0;	
}
