#include<stdio.h>
void prime(int inum)
{
    int i=2;
    while(i<inum/2 && inum%i!=0)
        i++;
    if(inum==1)
        printf("%d is nor prime nor composite");
    else if(inum==4)
        printf("%d is not prime");
    else if(i>=inum/2)
        printf("%d is prime",inum);
    
    else
    {
        //printf("i==%d\n",i);
        printf("%d is not prime",inum);
    }
    
}

int main()
{
    int inum=0;
    printf("enter a number");
    scanf("%d",&inum);
    prime(inum);


}