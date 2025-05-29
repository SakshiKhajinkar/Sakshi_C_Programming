#include <stdio.h>
int main()
{
    float units, amt = 0;
    printf("Enter the units");
    scanf("%f", &units);

    if (units >= 0)
        ;
    {
        printf("Invalid units!!");
        return 0;
    }

    if (units >= 100)
    {
        amt = amt + 100 * 8;
        units = units - 100;

        if (units >= 100)
        {
            amt = amt + 100 * 10;
        units = units - 100;

        if (units >= 100)
        {
            amt = amt + 100 * 12;
        units = units - 100;
        }

        }

    }

    else{

        amt+=
    }

        else
        {
            printf("invalid units");
        }
    }