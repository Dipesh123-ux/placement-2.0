#include <stdio.h>
#include <string.h>

int main ()
{
    char s[1000];
    int i , j;
    scanf("%s",s);
    int len = strlen(s);

    for(i=0;i<=9;i++)
    
    {
        int count = 0;
        
        for(j=0;j<= len - 1;j++)

        {
            if(s[j]== 48 + i)
            {
                count++;
            }
        }
        printf("%d ",count);
        
    }
    

}