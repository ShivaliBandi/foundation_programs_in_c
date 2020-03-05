#include<stdio.h>
#define TRUE 1
#define FALSE 0
void max3(int inum1,int inum2,int inum3)
{
    (inum1>inum2)? (inum1>inum3) ?printf("max is %d:\n",inum1) :printf("max is %d\n",inum3) : 
    (inum2>inum3) ?printf("max is %d:\n",inum2) :printf("max is %d\n",inum3);
       
}

int main()
{
    int inum1=0,inum2=0,inum3=0;
    printf("enter  three numbers:\n");
    scanf("%d%d%d",&inum1,&inum2,&inum3);
    max3(inum1,inum2,inum3);
       
    return 0;
}