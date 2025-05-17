#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    printf("Max is %.2f",fmax(a,b));
    return 0;
}
