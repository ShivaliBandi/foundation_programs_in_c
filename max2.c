#include<stdio.h>
#define TRUE 1
#define FALSE 0
void max2(int inum1,int inum2)
{
    (inum1>inum2)? printf("max is %d:\n",inum1) : printf("max is %d:\n",inum2);
       
}

int main()
{
    int inum1=0,inum2=0;
    printf("enter  number:\n");
    scanf("%d%d",&inum1,&inum2);
    max2(inum1,inum2);
       
    return 0;
}