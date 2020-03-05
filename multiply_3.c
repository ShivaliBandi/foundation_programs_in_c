#include<stdio.h>
int mult(int inum1,int inum2,int inum3)
{
   
    return (inum1*inum2*inum3); 

}

int main()
{
    int inum1=0,inum2=0,ians=0,inum3=0;
    printf("enter three numbers:\n");
    scanf("%d%d%d",&inum1,&inum2,&inum3);
    ians=mult(inum1,inum2,inum3);
    printf("MULTIPLICATION  IS :%d\n",ians);
    return 0;
}