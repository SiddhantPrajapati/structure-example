
#include<stdio.h>
void main()
{
    struct emp
    {
        int a;
        float b;
        struct emp1
        {
            int c;
            float d;
        }a1;  //object of emp1 structure
    }b1;     //object of emp structure
    printf("enter the value of a: \n");
    scanf("%d",&b1.a);
    printf("enter the value of b: \n");
    scanf("%f",&b1.b);
    printf("enter the value of c: \n");
    scanf("%d",&b1.a1.c);
    printf("enter the value of d: \n");
    scanf("%f",&b1.a1.d);

    printf("a=%d \t b=%f \t c=%d \t d=%f",b1.a,b1.b,b1.a1.c,b1.a1.d);
}
