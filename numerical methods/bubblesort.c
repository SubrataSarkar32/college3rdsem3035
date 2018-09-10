#include<stdio.h>
#include<stdlib.h>
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int* bubble(int*arr,int a)
{
    int i=0,j=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap((arr+j),(arr+j+1));
            }
        }
    }
    return arr;
}
int main(void)
{
    int a=0,i=0,j=0,temp=0;
    int* arr;
    printf("Enter number of elements: ");
    scanf("%d",&a);
    arr=(int *)calloc(a,sizeof(int));
    for(i=0;i<a;i++)
    {
        printf("Enter %d th element: ",i+1);
        scanf("%d",(arr+i));
    }
    for(i=0;i<a;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    arr=bubble(arr,a);
    printf("Sorted array is\n");
    for(i=0;i<a;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}
