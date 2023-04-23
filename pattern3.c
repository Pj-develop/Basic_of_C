/*
  Pattern Printing Program
Pattern 3:

     *
    **
   ***
  ****
 *****
******
  
  
  
*/

#include<stdio.h>
void main()
{
	int r,c,space,n; 	
	printf("\nEnter number of line = ");
	scanf("%d",&n);
	for(r = 1; r <= n; r++)//line control or Row control
	{
		//First print space in the same row or line 
		for(space = n; space>=r; space--) //Space Control 
		{
			printf(" ");  // Space Control  
		}	
		
		// Than print the value in the same row
		for(c = 1; c<=r; c++) //value control loop 
		{
			printf("*");  // Value 
		}	
		printf("\n");   // New Line
	}
	
}

/* 
 n = 4 (Example)
 
  r  r <= n   c		c<=r   Output		c++		r++
  1		1	  1		1		*			2
  			  2		0							2
  2		1	  1		1					2
  			  2		1		**			3
  			  3		0							3
  3

*/
