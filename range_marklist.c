#include<stdio.h>
void marks(int imarks)
{
    if(imarks<50)
        printf("small\n");
    else if(imarks>=50 && imarks<100)
        printf("medium\n");
     else if(imarks>=100)
        printf("large\n");
}


int main()
{
    int imarks=0;
    printf("enter marks\n");
    scanf("%d",&imarks);
    marks(imarks);
    return 0;
}