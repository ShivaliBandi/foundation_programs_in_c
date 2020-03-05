#include<stdio.h>
int difference(int inum1,int inum2)
{
    if(inum1>inum2)
        return (inum1-inum2);
    else 
        return(inum2-inum1);
}

int main()
{
    int inum1=0,inum2=0,ians=0;
    printf("enter two numbers:\n");
    scanf("%d%d",&inum1,&inum2);
    ians=difference(inum1,inum2);
    printf("DIFFERENCE IS :%d\n",ians);
    return 0;
}