#include <stdio.h>
/*
kms to miles
inches to foot
cms to inches

*/
void kmsToMiles(double valueInKm)
{
    const double miles = 0.621 * valueInKm; // 1km=0.621 miles
    printf("%.2lf km is equal to %.2lf miles\n", valueInKm, miles);
}

void inchesToFoot(double valueInInches)
{
    const double foot = 0.083 * valueInInches;
    printf("%.2lf inches is equal to %.2lf foot\n", valueInInches, foot);
}

void cmsToInches(double valueInCm)
{
    const double inches = 0.39 * valueInCm;
    printf("%.2lf cm is equal to %.2lf inches\n", valueInCm, inches);
}

int main()
{
    int num;
    double value;
    char choice;
    do{
    printf("what do you want to convert the value of: \n 1. Kms to miles \n 2. inches to foot \n 3. cms to inches\n choose from 1 to 3.");
    scanf("%d", &num);
    switch (num)
    {
    case 1:

        printf("Enter the value in km: ");
        scanf("%lf", &value);
        kmsToMiles(value);
        break;

    case 2:
        printf("Enter the value in Inches: ");
        scanf("%lf", &value);
        inchesToFoot(value);
        break;

    case 3:
        printf("Enter the value in cm: ");
        scanf("%lf", &value);
        cmsToInches(value);
        break;

    default:
        printf("Invalid num. please choose either 1,2 or 3.\n");
       
        break;
    }
    printf("Do you want to exit the program?(Y/N)");
    scanf(" %c", &choice);

    } while (choice=='n'||choice=='N');
    return 0;
}