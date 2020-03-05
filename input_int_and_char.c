#include<stdio.h>
void displayNumChar(int inum,char ch)
{
     printf("number:%d\ncharacter:%c",inum,ch);
}
int main()
{
    int num=0;
    char c;
    printf("enter one integer and one character\n");
    scanf("%d %c",&num,&c);
   displayNumChar(num,c);
    return 0;
}