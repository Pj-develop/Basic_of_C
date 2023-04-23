#include <stdio.h>
void main(){
	int r,c,n;
	printf("Enter a No.: ");
	scanf("%d",&n);
	
	for (r=1;r<=n;r++)//Line control, row control
	{
		for (c=n;c>=r;c--)//SPACE
		{
			printf(" ");
		}
		
		for (c=1;c<=(r);c++)//first half 2
		{
			printf("*");
		}
		for (c=1;c<(r);c++)//first half TRIANGLE
		{
			printf("*");
		}
	printf("\n");
	}


	
	}
