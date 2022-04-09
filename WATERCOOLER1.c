#include <stdio.h>

int main(void) {
	// your code goes here
	int no,i,R,P,M;
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{  
    	
	    scanf("%d %d %d",&R,&P,&M);
	 
    	if(R*M<P)
    	{
    	    printf("YES\n");
    	}
    	else
    	{
    	    printf("NO\n");
    	}
	}
	return 0;
}

