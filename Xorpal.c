// https://www.codechef.com/FEB222C/problems/XORPAL/
#include <stdio.h>

int main(void)
{
	int t,n,s1,s2,i;
	char sh[1000000];
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    scanf("%s",sh);
	    s1=0,s2=0;
	    for(i=0;i<n;i++)
	    {
	        if(sh[i]=='0')
	        {
	            s1++;
	        }
	        else
	        {
	            s2++;
	        }
	    }
	    if(n%2==0)
	    {
	        if(s1==s2||(s1==0||s2==0)||(s1%2)==0)
	        {
	            printf("YES\n");
	        }
	        else
	        {
	            printf("NO\n");
	        }
	    }
	    else
	    {
	        printf("YES\n");
	    }
	    
	    
	}
	return 0;
}

