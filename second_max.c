#include<stdio.h>
void secondMaxRange(int isize,int arr[100])
{
    int i=0,max=arr[0],temp;

    while(i<isize)
    {
        if(max<arr[i])
        {   
            temp=max;
            max=arr[i];
        }
        if(temp=max)
        temp=arr[i];
        i++;
    }
    if(temp==max)
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
    secondMaxRange(inum,arr);

    return 0;
}