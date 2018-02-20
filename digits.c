#include<stdio.h>
int main()
{
	int n,s,l,m,a;
	scanf("%d",&n);
	l=n/10;
	m=l/10;
	a=l%10;
	s=n%10;
	printf("%d\t%d\t%d\t",m,a,s);
	return 0;
}
