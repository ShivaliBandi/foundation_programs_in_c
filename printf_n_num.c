#include<stdio.h>
void range(int isize)
{
    int i=1;
    while(i<=isize)
    {
        printf("%d\t",i);
        i++;
    }
    printf("\n");

}
int main()
{
    int inum=0;
    printf("enter range");
    scanf("%d",&inum);
    range(inum);

    return 0;
}