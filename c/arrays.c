#include<stdio.h>

int main()
{
    // int marks[4]={20,30,40,50};
    // int count = 4;
    // for (int i = 0; i < count;i++)
    //     printf("Marks of students %d is %d\n",i,marks[i]);
    // int marks[4];
    // for(int i=0;i<4;i++){
    //     printf("Enter the value of %d element of the array\n", i);
    //     scanf("%d", &marks[i]);
    // }
    // for (int i = 0; i < 4;i++){
    //     printf("The value of %d element of the array is %d.\n", i, marks[i]);
    // }

    int marks[2][4] = {{5, 6, 7, 8},
                       {1, 2, 3, 4}};

    for (int i = 0; i < 2;i++){
        for (int j = 0; j < 4;j++)
        {
           // printf("The value of %d,%d element of the array is %d\n", i, j, marks[i][j]);
           printf("%d", marks[i][j]);
        }
        printf("\n");
    }
    
        

    return 0;
}