//
#include<stdio.h>
void main()
{
    struct student
    {
        char name[20];
        char rollno[10];
        long int salary;
        char gender;
        float mobile_no;
        int i;

    }
    s[5];
    int i;
    for(i=0;i<5;i++)
        {
    printf("enter the name of student:\n");
    scanf("%s",s[i].name);
    printf("enter the roll no of student \n");
    scanf("%s",s[i].rollno);
    printf("enter the salary of student:\n");
    scanf("%ld",&s[i].salary);
    printf("enter the gender\n");
    scanf("%c",&s[i].gender);
    printf("enter the mobile no of student:\n");
    scanf("%f",&s[i].mobile_no);
        }
        for(i=0;i<5;i++)
        {


    printf("\n name of the student is %s",s[i].name);
    printf("\n roll no. %s",s[i].name);
    printf("\n salary=%ld",s[i].salary);
    printf("\n gender:%c",s[i].gender);
    printf("\n mobile no :-%f",s[i].mobile_no);
}
}

