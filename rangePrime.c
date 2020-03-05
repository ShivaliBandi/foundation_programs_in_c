#include<stdio.h>
#define TRUE 1
#define FALSE 0
void  prime(int inum)
{
    int i=2;
    while(i<inum/2 && inum%i!=0  )
        i++;
      if(inum==1 || inum==4)
        printf(" ");
   
    else if(i>=inum/2)
        printf("%d is prime\n",inum);
    
    
}

int main()
{
   int istart=0,iend=0,ians=0;
    printf("enter number start nd ending ");
    scanf("%d%d",&istart,&iend);
    for(;istart<=iend;istart++)
        prime(istart);

}