#include<stdio.h>
int main()
{
int n=55,sum=0,s;
while(n!=0)
{
s=n%10;
sum=sum+s;
n=n/10;
}
printf("the addition of two digits is:%d",sum);
return o;
}
