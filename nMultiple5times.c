#include<stdio.h>
void multipleRange(int isize)
{
    int i=1;
    while(i<=5)
    {
        
            printf("%d\t",isize*i);
        i++;
    }
    printf("\n");

}
int main()
{
    int inum=0;
    printf("enter range");
    scanf("%d",&inum);
    multipleRange(inum);

    return 0;
}