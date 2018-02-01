#include <stdio.h>

int main(void) 
{
   int count=0;
   long int n;
   printf("enter the digits");
   scanf("%ld",&n);
   while(n!=0)
   {
   	count++;
   	n=n/10;
   }
   printf("number of digit is:%ld",count);
	return 0;
}
