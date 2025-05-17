#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 number: ");
    scanf("%d",&a,&b);
    if(a>b)
    printf("max is %d",a);
    else
    printf("min is %d",b);
}