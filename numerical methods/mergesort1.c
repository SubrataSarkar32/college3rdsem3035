#include <stdio.h>
#include <stdlib.h>
void merge(int *a,int p,int q,int r){
		int *m,*n;
		int len_m,len_n,i=0,j=0,k=0;
		len_m=q-p+2;
		len_n=r-q+1;
		m=(int *)malloc(len_m * sizeof(int));
		n=(int *)malloc(len_n * sizeof(int));
		for(i=p;i<=q;i++){
			*(m+j)=*(a+i);
			j++;
		}
		for(i=q+1;i<=r;i++){
		*(n+k)=*(a+i);
		k++;
		}

		*(m+(len_m-1))=10000000;
		*(n+(len_n-1))=10000000;
		j=0,k=0;
		for(i=p;i<=r;i++){
			if(*(m+j)<*(n+k)){
				*(a+i)=*(m+j);
				j++;
			}
			else{
				*(a+i)=*(n+k);
				k++;
			}
		}
}
void merge_sort(int *a,int p,int r){
	int q;
	q=(p+r)/2;
	if(q<r){
		merge_sort(a,p,q);
		merge_sort(a,q+1,r);
		merge(a,p,q,r);
	}
}
int main(){
	int n;
	printf("Enter number of elements= ");
	scanf("%d",&n);
	int *a;
	a=(int *)malloc(n * sizeof(int));
	int i=0;
	printf("Enter array= ");
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	printf("Sorted array= ");
	merge_sort(a,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
	return 0;
}
