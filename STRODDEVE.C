#include <stdio.h>

int main(void) {
              int i;
              char s[50];
              scanf("%s",&s);
              for(i=0;s[i]!='\0';i++)
              {
              	if(i%2==0)
                        printf("%c",s[i]);
              }printf("\t");
                for(i=0;s[i]!='\0';i++)
                {
                	if(i%2!=0)
                        printf("%c",s[i]);
                }
	// your code goes here
	return 0;
}
