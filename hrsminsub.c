#include<stdio.h>
int main()
{
	int c,d,e,f,g, hr,min,hr1,min1;
	scanf("%d\t%d\n",&hr,&min);
	scanf("%d\t%d",&hr1,&min1);
	c=hr-hr1;
	d=min-min1;
	e=(c*60);
	if(e<0)
	{
	f=-(e+d);
	}
	else
	{
		f=e+d;
	}
	printf("%d\t%d",f/60,f%60);
	return 0;
	
}
