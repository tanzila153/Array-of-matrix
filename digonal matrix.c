#include<stdio.h>

int main(){

   int i, j, numOfRow, numOfColumn;
   int A[10][10];
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
        printf("%d",A[i][j]);

    }
    printf(" \n");

   }
   printf("Digonal Matrix = ");
    for(i=0;i<numOfRow;i++){

      for(j=0;j<numOfColumn;j++){
             printf("\t");
             if(i==j)
        printf("\n %d",A[i][j]);

    }
    printf(" \n");

   }
return 0;
}
