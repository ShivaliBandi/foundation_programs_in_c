#include<stdio.h>
#define TRUE 1
#define FALSE 0
void chkEven(int inum1)
{
    (inum1%2==0)? printf("number is even:\n") : printf("number is odd:\n");
       
}

int main()
{
    int inum1=0,inum2=0;
    printf("enter  number:\n");
    scanf("%d",&inum1);
    chkEven(inum1);
       
    return 0;
}