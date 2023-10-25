#include<stdio.h>

int main(){

   int i, j;
   int A[3][4] , B[3][4];
   printf("Enter elements for matrix\n");

   for(i=0;i<3;i++){

    for(j=0;j<4;j++){

        printf("A[%d][%d] = ",i,j);

        scanf("%d",&A[i][j]);
    }
    printf("\n");
   }
printf("A = ");
    for(i=0;i<3;i++){

      for(j=0;j<4;j++){
             printf("\t");
        printf("%d%",A[i][j]);

    }
    printf(" \n");

   }

 printf("Enter elements for matrix\n");

   for(i=0;i<3;i++)
    {

    for(j=0;j<4;j++)
    {

        printf("B[%d][%d] = ",i,j);
        scanf("%d" ,&B[i][j]);

    }
    printf("\n");

   }
   printf("B = ");

for(i=0;i<3;i++)
    {

      for(j=0;j<4;j++){
       // printf("B[%d][%d] = ",i,j);
       printf("\t");

        printf("%d%",B[i][j]);

    }
    printf("\n");
   }
return 0;
}
