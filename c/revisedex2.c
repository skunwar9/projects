#include <stdio.h>

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float cmToinches = 0.393701;
    float poundToKg = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter the input character. q to quit\n 1. kms to foot\n 2. inches to foot\n 3. cms to inches\n 4. pound to kgs\n 5. inches to meters\n");
        scanf("\n%c", &input);
        

        switch (input)
        {
        case 'q':
            printf("Quitting the program");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsToMiles;
            printf("%f kms is equal to %f miles\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f inches is equal to %f foot \n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmToinches;
            printf("%f cms is equal to %f inches \n", first, second);
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundToKg;
            printf("%f pounds is equal to %f kgs \n", first, second);
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters \n", first, second);
            break;
        default:
            break;
        }
    }
end:

    return 0;
}