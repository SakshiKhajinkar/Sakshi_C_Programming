#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    b=(a>b)?a:b;
    b=(c>b)?c:b;
    b=(d>b)?d:b;

    printf("Max is %d",b);
    return 0;
}