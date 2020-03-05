#include<stdio.h>
void displayNum(int inum)
{
printf("you entered number is:%d\n",inum);

}
int main()
{
int num=0;
printf("enter a number");
scanf("%d",&num);
displayNum(num)
return 0;

}