#include<stdio.h>
int main()
{
    char ch;
    printf("enter a Alphabet :");
    scanf("%c",&ch);

    ch * tolower(ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

        printf("It is Vowel");
        break;

        default:
            printf("It is not vowel");
    }


}