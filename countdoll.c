#include <stdio.h>

int main(void) 
{
	int t,i,k,n,arr[10000000],count;
	scanf("%d",&t);
	while(t--)
	{
	    count=0;
	    scanf("%d%d",&n,&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>k)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",count);
	    
	}
	return 0;
}

