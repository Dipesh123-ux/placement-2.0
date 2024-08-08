#include <stdio.h>

struct student_sgpa
{
    float credit[5];
    float grade_points[5];
    char student_name[20];
    
}S;

int main ()
{
    int  j , i , sum_credit = 0 , sum_grade = 0;
    float sgpa;

    printf("ENTER DETAILS:\n");
    
    
       printf("Name of student : \n");
       scanf("%[^\n]%*c",S.student_name);
       for(j=0;j<5;j++)
       {
           printf("Enter Credit for subject %d : \n",j + 1);
           scanf("%f",&S.credit[j]);
           
       }

          for(j=0;j<5;j++)
       {
           printf("Enter Grade points Achieved in  subject %d by %s: \n",j + 1 , S.student_name);
           scanf("%f",&S.grade_points[j]);
           
       }

    

    printf("\n");
    
    
        for(j=0;j<5;j++)
        {
            sum_credit += S.credit[j];
            sum_grade += S.grade_points[j] * S.credit[j];
        }


        sgpa = sum_grade / sum_credit;

        printf("SGPA of %s :\n",S.student_name);
        printf("%.2f",sgpa);

    
}