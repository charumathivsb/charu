#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char c[15];
	scanf("%s",&c);
	while(n>=1)
	{
		printf("%s\n",&c);
		--n;
	}
	return 0;
}
