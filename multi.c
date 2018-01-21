# include <stdio.h> 
int main() 
{ 
 int i, n,d;
 scanf("%d", &n) ; 
 scanf("%d", &d) ; 
 for(i = 1 ; i <= n ; i++) 
{
if(i % d == 0) 
{
  printf("%d\t", i) ; 
}
}
return 0 ; 
}
