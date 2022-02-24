#include <stdio.h>

int main(void)
{
    int t,i,sum,k,j,n,arr[1000000],small;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        
        small=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]<small)
            {
                small=arr[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(small==arr[i])
            {
                arr[i]=-9999;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]!=-9999)
            {
                sum=sum+arr[i];
            }
        }
        printf("%d\n",sum);
    }
	return 0;
}

