#include<stdio.h>
int main()

{


int a[20] , n, i;

 printf(" how many numbers :");

 scanf("%d",&n);



for(int i=0; i<n;i++)
 {

 scanf("%d",&a[i]);

 }

 a[0]= 0;
 a[1]= 1;

 for(int i=2 ; i<n; i++ ){

    a[i] = a[i-1]+ a[i-2];

 }


printf(" fibonacci numbers : %d",a[i]);

 return 0;
}
