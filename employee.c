#include<stdio.h>
int main()
{
    int eid;
    char ename[n];
    float bs,tax,hra,da,totalsalary;

    printf("enter a employee details");

    printf("ID");
    scanf("%d",&eid)

    printf("Name:")
    scanf("%s",name);

    printf("basic salary");
    scanf("%f",&bs);

    printf("DA(%):");
    scanf("%f",&da);

    printf("Tax(%):");
    scanf("%f",&tax);

    printf("HRA(%):");
    scanf("%f",&hra);

    totalsalary=bs+(bs*(da+hra-tax)/100);
    printf("totalsalary:%f",totalsalary);

    return 0;

    

}