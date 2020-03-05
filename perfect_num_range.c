#include<stdio.h>
#define TRUE 1
#define FALSE 0
int perfect(int inum)
{
    int i=1,isum=0;
    while(i<inum)
    {
        if(inum%i==0)
            isum=i+isum;
        i++;

    }
    //printf("isum is %d",isum);
    if(inum==isum)
        return TRUE;
    else 
        return FALSE;
}
int main()
{
    int istart=0,iend=0,ians=0;
    printf("enter number start nd ending ");
    scanf("%d%d",&istart,&iend);
    for(;istart<=iend;istart++)
    {
        ians=perfect(istart);
        if(ians==TRUE)
            printf("its a perfect number %d\n",istart);
        
    }
    return 0;
}