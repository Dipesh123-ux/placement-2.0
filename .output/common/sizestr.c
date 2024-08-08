#include <stdio.h>

struct abc {
    char x;
    int y;
    char z;
};

int main ()
{
    struct abc var;
    printf("%d",sizeof(struct abc));

}