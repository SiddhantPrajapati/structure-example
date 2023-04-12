//WAP using pointer print player name, team name ,average print player name in acsending order.
#include<stdio.h>
#include<stdlib.h>
struct player
{
    int r[3],sum;
    char pname[20];
    char tname[20];
    float avg,temp;
}*ptr;
int main()
{
    int i,j;
    ptr=(struct player *)malloc(3*sizeof(struct player));
    for(i=0;i<3;i++)
    {
        printf("\nplayer name:");
        scanf("%s",(ptr+i)->pname);
        printf("\n team name of player:");
        scanf("%s",(ptr+i)->tname);
        for(j=0;j<3;j++)
        {
            printf("\nrun of %d inning:",j+1);
            scanf("%d",&(ptr+j)->r[j]);
        }
        (ptr+i)->sum=0;
        for(j=0;j<3;j++)
        {
            (ptr+i)->sum=(ptr+i)->sum+(ptr+j)->r[j];
        }
        (ptr+i)->avg=(ptr+i)->sum/3;

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if((ptr+i)->avg<(ptr+j)->avg)
            {
                (ptr+i)->temp=(ptr+i)->avg;
                (ptr+i)->avg=(ptr+j)->avg;
                (ptr+j)->avg=(ptr+i)->temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n player name:%s",(ptr+i)->pname);
        printf("\n player's team name:%s",(ptr+i)->tname);
        printf("\n player average:%f",(ptr+i)->avg);

    }


}
