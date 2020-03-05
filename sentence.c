#include<stdio.h>
void displaySentence(char *buff)
{
printf("%s",buff);
}
int main()
{
    char buffer[100];
 printf("enter a sentence\n");
 scanf("%[^\n]s",buffer);
 displaySentence(buffer);
    return 0;
}