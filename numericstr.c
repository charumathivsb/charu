#include <stdio.h>

int main()
{
	char s[100];
	int i,count=0;
	gets(s);
    for(i=0;s[i]!='\0';i++)
    {
    	if((s[i]>='0')&&(s[i]<='9'))
    	{
    	count++;
             }
}
printf("%d",count);
return 0;
}
