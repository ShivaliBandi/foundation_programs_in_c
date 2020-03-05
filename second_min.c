#include<stdio.h>
void secondMinRange(int isize,int arr[100])
{
    int i=0,min=arr[0],temp=arr[0];

    while(i<isize)
    {
        if(min>arr[i])
        {   
          //  printf("i :%d\t",i);
            temp=min;
            //printf("temp :%d\t",temp);
            min=arr[i];
        }
        if(min==temp)
        temp=arr[i];
        //printf("outside if i :%d\t",i);
        i++;
    }
    if(temp==min)
        printf("ERROR: PLEASE GIVE PROPER INPUT");
    else
    printf("%d\t",temp);
    printf("\n");

}
int main()
{
    int inum=0,arr[100];
    printf("enter range");
    scanf("%d",&inum);
    int i=0;
    for(;i<inum;i++)
    scanf("%d",&arr[i]);
    secondMinRange(inum,arr);

    return 0;
}