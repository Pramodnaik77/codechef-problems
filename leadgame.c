// https://www.codechef.com/problems/TLG
#include <stdio.h>

int main(void)
{
	int p1[10000],p2[10000],n,i,j,great1,great2,lead1=0,lead2=0,s1,s2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&p1[i],&p2[i]);
	}
	for(i=0;i<n;i++)
	{
	    s1=0,s2=0;
	    for(j=0;j<=i;j++)
	    {
	        s1=s1+p1[j];
	        s2=s2+p2[j];
	    }
	    if(s1>s2)
	    {
	        great1=s1-s2;
	        if(great1>lead1)
	        {
	            lead1=great1;
	        }
	    }
	    else
	    {
	        great2=s2-s1;
	        if(great2>lead2)
	        {
	            lead2=great2;
	        }
	    }
	    
	}
	if(lead1>lead2)
	{
	    printf("%d %d",1,lead1);
	}
	else
	{
	    printf("%d %d",2,lead2);
	}
	
	
	return 0;
}

