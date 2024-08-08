 #include <stdio.h>

 void update(int *a , int *b)
 {
     int A , B;

     A = *a + *b;
     printf("%d\n",A);

     if (*a > *b)
     {
         printf("%d", *a - *b);
     }
     else
     {
         printf("%d",*b - *a);
     }



 }

 int main ()
 {
     int a , b;
     scanf("%d",&a);
     scanf("%d",&b);
     update(&a , &b);
 }