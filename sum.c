#include<stdio.h>
int sum(int inum1,int inum2)
{
    if(inum1<0)
        inum1=-inum1;
    else if (inum2<0)
        inum2=-inum2;
    return (inum1+inum2); 

}

int main()
{
    int inum1=0,inum2=0,ians=0;
    printf("enter two numbers:\n");
    scanf("%d%d",&inum1,&inum2);
    ians=sum(inum1,inum2);
    printf("SUM IS :%d\n",ians);
    return 0;
}