#include<stdio.h>
void power(int inum,int raisedto)
{
    int ians=1;
    //printf("%d,%d,",itemp1,itemp2);
    while(raisedto!=0)
    {
      ians*=inum;
        raisedto--;
    }
    printf("POWER IS %d\n",ians);
}

int main()
{
    int inum=0,iraisedTo=0;;
    printf("enter a two number");
    scanf("%d %d",&inum,&iraisedTo);
    power(inum,iraisedTo);
    return 0;
}