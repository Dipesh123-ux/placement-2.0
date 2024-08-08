#include <stdio.h>

    struct car 
    {
        int car_cap;
        int fuel_cap;
        float city_m;
    };

int main ()
{
  struct car c[2];
  int i;
  for(i=0;i < 2; i++)
  {
      printf("Enter car %d capacity :\n",i + 1);
      scanf("%d",&c[i].car_cap);
      printf("Enter car %d fuel capacity :\n",i + 1);
      scanf("%d",&c[i].fuel_cap);
      printf("Enter car %d mileage :\n",i + 1);
      scanf("%f",&c[i].city_m);
      
      
  }

  printf("\n");

  for(i=0;i<2;i++)
  {
      printf("car %d details is:\n",i + 1);
      printf("car capacity : %d\n",c[i].car_cap);
      printf("fuel capcity : %d\n",c[i].fuel_cap);
      printf("car mileage : %f\n",c[i].city_m);
  }

}