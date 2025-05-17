#include<stdio.h>
int main()
{
    int num1,num2
    printf("enter 2 numbers");
    scanf("%d%d",&num1,&num2);

    printf("before swapping\n num1=%d\nnum2=%d",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;

    printf("after swapping");
    printf("\nnum1=%d",num1);
    printf("\nnum2=%d",num2);

    return 0;

}