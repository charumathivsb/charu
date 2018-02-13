#include <stdio.h>
 
int main()
{
  char ch[10];
  int i,count=0;
  scanf("%s",&ch);
  while(i!='\0')
  {
 
  if (ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch [i]== 'I' || ch [i]=='o' || ch[i]=='O' || ch[i] == 'u' || ch [i]== 'U')
    count++;
  }
  if(count>0)
  {
  printf("vowels");
  }
  else
  {
  	printf("not a vowel");
  }
  return 0;
}
