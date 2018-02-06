#include <stdio.h>
int main()
{
int a[50], n, i,maxi;
scanf("%d", &n);
printf("%d", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
maxi = a[0];
for (i = 1; i < n; i++)
{
if (maxi < a[i])
maxi= a[i];      
}
printf("\n%d",maxi);
return 0;
}
