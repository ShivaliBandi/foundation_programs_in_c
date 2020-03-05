#include<stdio.h>
void marks(float fper)
{
    if(fper>=70)
        printf("distinction\n");
    else if(fper<50 && fper>=40)
        printf("pass\n");
    else if(fper>=50 && fper<60)
        printf("first class\n");

     else if(fper>=60 && fper<70)
        printf("first class\n");
      else 
        printf("fail\n");
}



int main()
{
    float fpercentage=0.0;
    printf("enter percentage\n");
    scanf("%f",&fpercentage);
    marks(fpercentage);
    return 0;
}