#include<stdio.h>
#include<math.h>
int main(void)
{
	    float x[10],y[10],a[10][10];
	    int i,j,k,n,iteration;
	    printf("Enter the value of order:\n");
	    scanf("%d",&n);
	    printf("Enter the coefficient and RHS\n");
	    for(i=0;i<n;i++)
	    {
	    	    for(j=0;j<n;j++)
	    	    {
	    	    	   scanf("%f",&a[i][j]);
 	            }
 	            getchar();
	    }
	    for(i=0;i<n;i++)
	    {
	    	    x[i]=0;
	    	    y[i]=0;
	    }
	    iteration=0;
	    printf("Here");    	
    	for(k=0;k<n;k++)
    	{
	        if(fabs(x[k]-y[k])>0.00005)
   		    {
	    	   printf("\nIteration=%d\n",iteration);
	    	   for(i=0;i<n;i++)
	    	   {
 	   	            y[i]=x[i];
 	   	            printf("\nx[%d]= %f",i,x[i]);
	    	   }
	    	   iteration+=1;
	    	   for(i=0;i<n;i++)
	        	{
	    		       x[i]=a[i][n];
	    		       for(j=0;j<n;j++)
	    		       {
	    		   	        if(i!=j)
	    		   	        {
	    		   	        	    x[i]=x[i]-(a[i][j]*x[j]);
	    		   	        }
	    		       }
	    		      x[i]=x[i]/a[i][i];
	        	}
   		    }
	    }
	    printf("Here2");
	    printf("\n THE FINAL RESULT IS \n");
	    for(i=0;i<n;i++)
	    {
	    	    printf("%f\t",x[i]);
	    }
	    return 0;
}
