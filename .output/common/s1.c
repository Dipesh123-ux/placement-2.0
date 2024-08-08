#include <stdio.h>


int main (){

    int n;
    scanf("%d",&n);

    int m  = 0 , j = 0 , k = 0;

    int p[] = {2,3,5};

     for(int i = 0; i < 3 &&  n > 1; i++ ){
         while(n % p[i] == 0){
             if(i == 0){
                 m++;
             }
             if(i == 1){
                 j++;
             }
             if(i == 2){
                 k++;
             }
             n = n/p[i];
         }
     }

     if(n == 1){
         printf("%d#%d#%d",m,j,k);
     }
     else{
         printf("no");
     }


}