#include <stdio.h>
void main(){
	int r,c,n;
	printf("Enter a No.: ");
	scanf("%d",&n);
	
	for (r=1;r<=n;r++)//Line control, row control
	{
		for (c=1;c<=r;c++)//first half
		{
			printf(" * ");
		}
	printf("\n");
	}

	//loop 2
	
	for(r=1;r<=n;r++)//Line control, row control
	{
		for (c=1;c<=(n-r);c++)
		{
			printf(" * ");
		}
		printf("\n");//line change
	}
	
	
	}
