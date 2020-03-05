#include<stdio.h>
void minRange(int isize,int arr[100])
{
    int i=0,min=arr[0];

    while(i<isize)
    {
        if(min>arr[i])
            min=arr[i];
        i++;
    }
    printf("min is %d\t",min);
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
    minRange(inum,arr);

    return 0;
}