/* define a structure called cricket that will describe the following information player name,team name,batting average*/
#include<stdio.h>
struct cricket
{
    char p[20],t[20];    //p=player name  t=team name
    int r[3],sum;             //r=run
    float avg;
}a[3];
void main()
{
    int i,j,n,sum=0;
    for(i=0;i<3;i++)
    {
       printf("\n enter team name:");
       scanf("%s",a[i].t);
       printf("\n enter player name:");
       scanf("%s",a[i].p);
       printf("\n enter runs of 3 innings:");
       for(j=0;j<3;j++)
       {
           printf("\n enter run of %d inning:",j+1);
           scanf("%d",&a[i].r[j]);
           a[i].sum=a[i].sum+a[i].r[j];
       }
       a[i].avg=a[i].sum/3;
    }
    for(i=0;i<3;i++)
    {
        printf("\n player name:%s",a[i].p);
        printf("\n team name:%s",a[i].t);
        printf("\n batting average of %d player:%f",i+1,a[i].avg);
    }
}
