#include<stdio.h>
void digitname(int inum)
{
    jump:switch(inum)
    {
        case 1 :
            printf("one \n");break;
        case  2 :
            printf("two \n");break;
        case 3 :
                printf("three\n");break;
        case 4 :
                printf("four\n");break;
        case 5 :
                printf("five \n");break;
        case 6 :
                printf("six \n");break;
        case 7 :
                printf("seven \n");break;
        case 8 :
                printf("eight\n");break;
        case 9 :
                printf("nine \n");
                
                break;
        default:
        printf("ERROR: PLEASE GIVE PROPER INPUT");
        scanf("%d",&inum);
                goto jump;
    }

}

int main()
{
    int inum=0;
    printf("enter a digit:\n");
    scanf("%d",&inum);
    digitname(inum);

    return 0;
}