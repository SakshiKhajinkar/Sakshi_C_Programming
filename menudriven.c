#include <stdio.h>
int main()
{
    int a, b, ch;

    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");

    printf("\nenter your choice");
    scanf("%d", &ch);

    printf("enter a numbers");
    scanf("%d%d", &a, &b);

    switch (ch)
    {
    case 1:
        printf("Addition is %d", a + b);
        break;

    case 2:
        printf("Subtraction is %d", a - b);
        break;

    case 3:
        printf("Multiplication is %d", a * b);
        break;

    case 4:
        printf("Division is %d", a / b);
        break;

    default:
        printf("invalid numaber");
        break;
    }
}
