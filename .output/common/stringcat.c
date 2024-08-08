#include <stdio.h>

int main ()
{
    char s1[15] = {"Herry"};
    char s2[15]={"Potter"};
    int i , j;
    for(i=0;s1[i]!='\0';++i);
    for(j=0;s2[j]!='\0';++j,++i)
    {
      s1[i] = s2[j];
    }
    s1[i] = '\0';

    printf("Required string is %s",s1);


}