#include<stdio.h>

int main(){

   int i, j, numOfRow, numOfColumn;
   int A[10][10] , transpose[10][10];
    printf("Enter any number of Row and Column :");

   scanf("%d %d",&numOfRow,&numOfColumn);
   printf("Enter elements for matrix\n");

   for(i=0;i<numOfRow;i++){

    for(j=0;j<numOfColumn;j++){

        printf("A[%d][%d] = ",i,j);

        scanf("%d",&A[i][j]);
    }
    printf("\n");
   }
printf("A = ");
    for(i=0;i<numOfRow;i++){

      for(j=0;j<numOfColumn;j++){
             printf("\t");
        printf("%d%",A[i][j]);

    }
    printf(" \n");

   }

printf("Transpose = ");

   for(i=0;i<numOfRow;i++)
    {

    for(j=0;j<numOfColumn;j++)
    {

      transpose[j][i]=A[i][j];

    }


   }
   for(i=0;i<numOfRow;i++){

      for(j=0;j<numOfColumn;j++){
             printf("\t");

        printf(" \n%d%",transpose[i][j]);

    }
    printf(" \n");

   }
return 0;


}
