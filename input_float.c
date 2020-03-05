#include<stdio.h>
void displayFloat(float fnum)
{
printf("you entered number is:%.2f\n",fnum);

}
int main()
{
float num=0.0;
printf("enter a number");
scanf("%f",&num);
displayFloat(num)
return 0;

}