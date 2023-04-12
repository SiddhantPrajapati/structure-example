#include<stdio.h>
void main()
{
    struct person
    {
        int age;
        float weight;
    };
    struct person*personptr,person1;
    personptr=&person1; //address of all structure to the pointer
    printf("enter age=");
    scanf("%d",&(personptr)->age);
    printf("enter weight=");
    scanf("%f",&(personptr)->weight);
    printf("displaying:\n");
    printf("\n address of age is=%d \n value of=%d",&(personptr)->age,(personptr)->age);
    printf("\n address of weight is=%d\n value of=%f",&(personptr)->weight,(personptr)->weight);
}

