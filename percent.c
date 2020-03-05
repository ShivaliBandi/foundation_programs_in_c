#include<stdio.h>
void percent(float inum)
{
    printf("PERCENTAGE IS:%.4f\n",(inum*100)/1000);
}
    


int main()
{
    int inum;
    printf("enter two numbers");
    scanf("%d",&inum);
    percent((float)inum);
    return 0;
}