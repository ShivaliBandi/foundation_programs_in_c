#include<stdio.h>
void dollar(int isize)
{
    int i=0;
    for(;i<isize;i++)
        printf("$\t");
    printf("\n");

}
int main()
{
    int inum=0;
    printf("enter num of $ you want to print");
    scanf("%d",&inum);
    dollar(inum);

    return 0;
}