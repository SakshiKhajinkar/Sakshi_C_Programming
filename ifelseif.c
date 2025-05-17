#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(c>=a && c>=b)
    printf("Max is %d",c);
    else if(a>=b && a>=c)
    printf("Max is %d",a);
    else
    printf("Max is %d",b);

}
