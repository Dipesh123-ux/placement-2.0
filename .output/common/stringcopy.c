#include <stdio.h>

int main ()
{
    char s1[10] = {"Herryg"};
    char s2[10]={"Potter"};
    int i=0;
    while(s1[i]!='\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i]= '\0';
    printf("copied string is %s",s2);

}