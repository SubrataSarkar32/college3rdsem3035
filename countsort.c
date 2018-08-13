#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a=0,i=0,k=0,max=0,j=0;
    int* arr;
    int* arr2;
    int* arr3;
    printf("Enter size of array:");
    scanf("%d",&a);
    arr=(int*)malloc(a*sizeof(int));
    for(i=0;i<a;i++)
    {
        printf("Enter element:");
        scanf("%d",(arr+i));
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    //printf("%d\n",max);
    arr2=(int*)calloc(max,sizeof(int));
    for(i=0;i<max;i++)
    {
        arr2[arr[i]-1]+=1;
    }
    /* for(i=0;i<max;i++)
    {
        printf("%d",arr2[i]);
    }
    printf("\n");*/
    arr3=(int*)calloc(max,sizeof(int));
    for(i=0;i<max;i++)
    {
        for(k=0;k<arr2[i];k++)
        {
            arr3[j]=i+1;
            j++;
        }
    }
    printf("Sorted array is\n");
    for(i=0;i<a;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
    return 0;
}
