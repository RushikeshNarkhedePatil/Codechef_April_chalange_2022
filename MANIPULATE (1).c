#include <stdio.h>

int main() {
	// your code goes here
	int no,i,ezio,gaurds;
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{  
    	
	    scanf("%d %d",&ezio,&gaurds);
    	if(ezio>=gaurds)
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
