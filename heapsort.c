#include<stdio.h>
#include<stdlib.h>
void swap(int* a,int* b)
{
    int temp;
    temp=(*a);
    (*a)=(*b);
    (*b)=temp;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;  // Initialize largest as root
    int l = 2*i + 1;  // left = 2*i + 1
    int r = 2*i + 2;  // right = 2*i + 2

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(arr+i, arr+largest);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (i=n-1; i>=0; i--)
    {
        swap(arr+0, arr+i);
        heapify(arr, i, 0);
    }
}
int main(void)
{
    int n,i;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int *a;
    a=(int*)calloc(n,sizeof(int));
    printf("Enter array elements:");

    for(i=0;i<n;i++)
        scanf("%d",(a+i));

    heapSort(a,n);

    printf("\nSorted array is :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
