#include<stdio.h>

int fib_recursive(int n){
    if((n==1)||(n==2)){
        return n;
    } else{
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int main()
{
    int n;
    printf("Enter the term number in fibonacci series to find: ");
    scanf("%d", &n);

    printf("fibonacci series at position %d is %d\n",n,fib_recursive(n));

    return 0;
}