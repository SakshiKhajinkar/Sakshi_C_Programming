#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];

    printf("enter a number: ");
    scanf("%s",&n);

    printf("Reverse Number : %s",strrev(n));

    return 0;
}