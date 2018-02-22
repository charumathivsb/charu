#include <stdio.h>

int main() {
              int num1,num2,num3;
              scanf("%d%d",&num1,&num2);
              for(int i=1;i<=1000;i++)
              {
              	if(num1%i==0&&num2%i==0)
              	num3=i;
              }
              printf("%d",num3);
              
	return 0;
}
