#include<stdio.h>

int main(){

   int i, j,numOfRow,numOfColumn;

   int first[5][5],second[5][5],result[5][5],r1,r2,c1,c2,a,b,c,sum=0;

   int A[5][5] , B[5][5], C[5][5], D[5][5];

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


   printf("Enter elements for matrix\n");

   for(i=0;i<numOfRow;i++)
    {

    for(j=0;j<numOfColumn;j++)
    {

        printf("B[%d][%d] = ",i,j);
        scanf("%d" ,&B[i][j]);

    }
    printf("\n");

   }



printf("A = ");
    for(i=0;i<numOfRow;i++){

      for(j=0;j<numOfColumn;j++){
             printf("\t");
        printf("%d",A[i][j]);

    }
    printf("\n");

   }


   printf("\nB = ");

for(i=0;i<numOfRow;i++)
    {

      for(j=0;j<numOfColumn;j++){

       // printf("B[%d][%d] = ",i,j);

printf("\t");

        printf("%d",B[i][j]);

    }
    printf("\n");
   }


   //Addition of matrix


    for(i=0;i<numOfRow;i++){

      for(j=0;j<numOfColumn;j++){

       C[i][j] = A[i][j] + B[i][j];
    }

    }

    printf(" \nA + B = ");

    for(i=0;i<numOfRow;i++)
        {

      for(j=0;j<numOfColumn;j++)
        {
             printf("\t");

        printf("%d",C[i][j]);

    }
    printf("\n");

   }

   //Substraction of matrix



   for(i=0;i<numOfRow;i++){

      for(j=0;j<numOfColumn;j++){

       D[i][j] = A[i][j] - B[i][j];

      }
          printf("\n");

    }
   printf(" A - B = ");

    for(i=0;i<numOfRow;i++)
        {

      for(j=0;j<numOfColumn;j++)
        {
             printf("\t");

        printf("%d",D[i][j]);

    }
    printf("\n");

   }


   //multiplication of matrix

  printf("Enters row and columns for first matrix : ");

  scanf("%d%d",&r1,&c1);

 printf("Enters row and columns for second matrix : ");

  scanf("%d%d",&r2,&c2);

  while(c1!=r1){

    printf("Error!  column and row are not equal");


  printf("Enters row and columns for first matrix : ");

  scanf("%d%d",&r1,&c1);

 printf("Enters row and columns for second matrix : ");

  scanf("%d%d",&r2,&c2);


  }

  printf("Enter first matrix :");

for(a=0;a<r1;a++)
        {

      for(b=0;b<c1;b++)
        {
            printf("first[%d][%d]",a,b);
             printf("\t");

        scanf("%d",&first[a][b]);

    }

        }
printf("Enter second matrix :");
        for(a=0;a<r2;a++)
        {

      for(b=0;b<c2;b++)
        {
            printf("second[%d][%d]",a,b);
             printf("\t");

        scanf("%d",&second[a][b]);
        }
    }
     printf(" first = ");
    for(a=0;a<r1;a++)
        {
//printf("\t");
      for(b=0;b<c1;b++)
        {
        printf("%d ",first[a][b]);
        }
   printf("\n");

    }
     printf("\n second = ");

    for(a=0;a<r2;a++)
        {
       printf("\t");

      for(b=0;b<c2;b++)
        {

        printf("%d ",second[a][b]);
        }
   printf("\n");

    }
    for(a=0;a<r1;a++)
        {

      for(b=0;b<c2;b++)
        {
            for(c=0;c<c1;c++){
                sum= sum + first[a][c] * second[c][b];

            }

            result[a][b] = sum;
                sum=0;

        }
    }

         printf("\n result = ");

    for(a=0;a<r1;a++)
        {
       printf("\t");

      for(b=0;b<c2;b++)
        {

        printf("%d ",result[a][b]);
        }
   printf("\n");

    }

return 0;

}

