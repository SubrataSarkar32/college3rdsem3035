#include<stdio.h>
#include<stdlib.h>
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int min(int* arr,int j,int a)
{
    int i=0,min=*(arr+j),k=j;
    for(i=j;i<a;i++)
    {
        if(arr[i]<min)
        {
            k=i;
        }
    }
    return k;
}
int* selection(int*arr,int a)
{
    int i=0,j=0,k=0;
    for(i=0;i<a;i++)
    {
        k= min(arr,i,a);
        printf("%d\n",arr[k]);
        swap(arr+k,arr+i);
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
    arr=selection(arr,a);
    printf("Sorted array is\n");
    for(i=0;i<a;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}
