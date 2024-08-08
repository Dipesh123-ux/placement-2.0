#include <stdio.h>

int main ()
{
    char s1[10] = {"Apple"};

    int i =0;
    while(s1[i] != '\0')
    {
        i++;

    }
    printf("the length of string is : %d",i);
}