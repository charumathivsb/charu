#include<stdio.h>
#include<string.h>
int main()
{
		char a[15], b[15];
	int i, c, d, t=0;
	scanf("%s",&a);
	scanf("%s",&b);
	for(i=0; a[i]!='\0'; i++)
 {
              if(a[i] == b[i])
              {
              t = 1;
              }
              else
              {
              t = 0;
              }
       }

       if(temp == 1)
       {
       printf("Both strings are same.");
       }
       else
 {
       printf("Both string not same.");
}
	c=strlen(a);
	d=strlen(b);
	if((c>d)||(c=d))
	{
		printf("%s",a);
	}
	else
	{
		printf("%s",b);
	}
	return 0;
}
