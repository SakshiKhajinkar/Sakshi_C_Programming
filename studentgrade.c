#include <stdio.h>
#include <stdio.h>
int main()
{
    int roll;
    char name[100], sub1[100], sub2[100], sub3[100];
    float m1, m2, m3, total, avg;
    char grade;

    printf("Enter the Stduent Details:");
    printf("Roll Number:");
    scanf("%d", &roll);
    printf("Name:");
    scanf("%s", &name);
    printf("Subject Name : ");
    scanf("%s", &sub1);
    printf("Marks:");
    scanf("%f",&m2);

    printf("Subject Name : ");
    scanf("%s", &sub2);
    printf("\nMarks:");
    scanf("%f", &m2);

    printf("Subject Name : ");
    scanf("%s",&sub3);
    printf("Marks:");
    scanf("%f",&m3);

    total = m1 + m2 + m3;
    avg = total / 3;

    if (avg<=100 && avg >=90)
        grade = 'O';

    else if (avg<= 80 && avg >= 70)
        grade = 'A';

    else if (avg <= 60 && avg>= 50)
        grade = 'B';

    else if (avg <=50 && avg>= 40)
        grade = 'C';

}
    

    



