#include <stdio.h>
int main()
{
int a[50], n, i,mini;
scanf("%d", &n);
printf("%d", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
mini = a[0];
for (i = 1; i < n; i++)
{
if (mini >a[i])
mini= a[i];      
}
printf("\n%d",mini);
return 0;
}
