#include<stdio.h>
void address(char ch)
{
     printf("ADDRESS:%p\n",&ch);
}
int main()
{
    char ch='\0';
    printf("enter character:\n");
    scanf("%c",&ch);
   address(ch);
    return 0;
}