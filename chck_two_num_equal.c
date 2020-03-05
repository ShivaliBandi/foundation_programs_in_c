#include<stdio.h>
#define TRUE 1
#define FALSE 0
int equal(int inum1,int inum2)
{
    if(inum1==inum2)
        return TRUE;
    else 
        return FALSE;
}

int main()
{
    int inum1=0,inum2=0;
    printf("enter two numbers:\n");
    scanf("%d%d",&inum1,&inum2);
    if(equal(inum1,inum2))
        printf("they are equal :\n");
    else
        printf("they are not");
    return 0;
}