#include<stdio.h>
void div(int inum1,int inum2)
{
    if(inum1%inum2==0)
        printf("divisible\n");
    else

        printf("not divisible\n");
}
    


int main()
{
    int inum1,inum2;
    printf("enter two numbers");
    scanf("%d%d",&inum1,&inum2);
    div(inum1,inum2);
    return 0;
}