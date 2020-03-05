#include<stdio.h>
void fibonacci(int inum)
{
    int ians,itemp1=1,itemp2=1;
    printf("%d,%d,",itemp1,itemp2);
    while(inum!=0)
    {
        ians=itemp1+itemp2;
        printf("%d,",ians);
        itemp1=itemp2;
        itemp2=ians;
        inum--;
    }
    printf("\n");
}

int main()
{
    int inum=0;
    printf("enter a number");
    scanf("%d",&inum);
    fibonacci(inum);
    return 0;
}