#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%dhrs\t%dmins",a/60,a%60);
	return 0;
}
