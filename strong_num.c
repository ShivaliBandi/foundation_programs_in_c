#include<stdio.h>
void factorial(int inum)
{
    int ians=inum;
    while(inum>0 && --inum)
        ians*=inum;
    printf("FACTORIAL IS %d\n",ians);

}

int main()
{
    int inum=0;
    printf("enter a number");
    scanf("%d",&inum);
    factorial(inum);
    return 0;
}