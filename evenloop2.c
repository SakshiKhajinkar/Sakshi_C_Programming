#include<stdio.h>
int main()
{
    int i,x,y;
    
    printf("enter starting number");
    scanf("%d",&x);

    printf("enter ending number");
    scanf("%d",&y);
    
    for(i=x;i<=y;i+=2)
        printf("%d\n",i);

        return 0;


}