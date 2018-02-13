#include<stdio.h>
int main()
{
	int a,s;
	scanf("%d",&a);
	while(a!=0)
	{
		s=a%10;
		if(s%2==1)
		printf("%d",s);
		a=a/10;
	}
	return 0;
}
