#include<stdio.h>
int sum(int inum1,int inum2,int inum3)
{
    if(inum1<0)
        inum1=-inum1;
    else if (inum2<0)
        inum2=-inum2;
    else if (inum3<0)
        inum3=-inum3;
    return (inum1+inum2+inum3); 

}

int main()
{
    int inum1=0,inum2=0,ians=0,inum3=0;
    printf("enter three numbers:\n");
    scanf("%d%d%d",&inum1,&inum2,&inum3);
    ians=sum(inum1,inum2,inum3);
    printf("SUM IS :%d\n",ians);
    return 0;
}