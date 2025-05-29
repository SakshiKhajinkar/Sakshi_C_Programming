#include<stdio.h>
int main()
{
    int temp,n,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    temp = n; //backup
    while (n>0)
    {
        int rem = n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
        printf("Palindrome number");
    else
        printf("Not Palindrome number");
        return 0;
    
}