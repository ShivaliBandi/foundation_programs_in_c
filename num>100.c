#include<stdio.h>
#define TRUE 1
#define FALSE 0
int chkGreaterThan100(int inum)
{
    if(inum>100)
        return TRUE;
    else
        return FALSE;

}
int main()
{
    int num=0,iReturnValue;
    printf("enter number :\n");
    scanf("%d",&num);
    iReturnValue=chkGreaterThan100(num);
    if(iReturnValue==TRUE)
        printf("GREATER\n");
    else
        printf("NOT GREATER \n");
    return 0;
}