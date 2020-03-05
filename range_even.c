#include<stdio.h>
void evenRange(int isize)
{
    int i=1;;
    while(i<=isize)
    {
        if(i%2==0)
            printf("%d\t",i);
        i++;;
    }
    printf("\n");

}
int main()
{
    int inum=0;
    printf("enter range");
    scanf("%d",&inum);
    evenRange(inum);

    return 0;
}