#include <stdio.h>

int main(){

    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int a = 0 , b = 0;
    int flag = 0;

     for(int j = 0 ; j < 3; j++){
         if(arr[1][j] % arr[0][j] != 0){
             break;
             flag = 1;
         }

     }

     if(flag == 1){
         
     }


}