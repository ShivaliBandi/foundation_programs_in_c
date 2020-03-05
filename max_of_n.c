#include<stdio.h>
void maxRange(int isize,int arr[100])
{
    int i=0,max=arr[0];

    while(i<isize)
    {
        if(max<arr[i])
            max=arr[i];
        i++;
    }
    printf("%d\t",max);
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
    maxRange(inum,arr);

    return 0;
}