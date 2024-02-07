#include<stdio.h>

int main(){
    int num_1 = 0, num_2 = 1, next=0,n;

    printf("enter the position you want the fibonacci number of: ");
    scanf("%d", &n);
   if(n==0){
       printf("The fibonacci number at position 0 is 0");
       return 0;
   }else if(n==1){
       printf("The fibonacci number at position 1 is 1");
       return 0;
   }

   for (int i = 2; i <= n;i++){
       next = num_1 + num_2;
       num_1 = num_2;
       num_2 = next;

       
   }
   printf("fibonacci num at position %d is %d", n, next);

   return 0;
}