
#include<stdio.h>
//way 1:
int isUpper(char ch)
{
    if(ch>='A' && ch<='Z')
        return 1;
    else 
        return 0;
}
int main()
{
    
    char cletter;
    printf("enter a character:\n");
    scanf("%c",&cletter);
    if(isUpper(cletter)==1)
    printf("is uppercase\n");
    else
    printf("is lower case\n");
    return 0;

}
/*

way 2:
#include<ctype.h>
int main()
{
    
    char cletter;
    printf("enter a character:\n");
    scanf("%c",&cletter);
    if(isupper((int)cletter))
    printf("is uppercase\n");
    else
    printf("is lower case\n");
    return 0;

}
*/