#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);

    i = 0;
    do{
        printf("%d\n",i);
        i++;

    }while(i<=n);

    return 0;

}