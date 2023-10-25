#include<stdio.h>
int main(){
    int num []={10,15,56,38,5};
    int value = 15;
    int pos = -1, i;
    printf("Enter the number = ");
     scanf("%d",&value);
    for(i=0; i<6;i++){


        if(value==num[i])
        {
            pos= i+1;
                    break;
        }
    }

        if(pos== -1){


    printf("number not found");
    }
    else{

    printf("number found  %d",value, pos);

}
return 0;
    }






