/*
  Pattern Printing Program
Pattern 2:

  *****
  ****
  ***
  **
  *
  
  12345
  1234
  123
  12
  1
  
  ABCDE
  ABCD
  ABC
  AB
  A
  
*/

#include<stdio.h>
void main()
{
	int r,c,n; 	
	printf("\nEnter number of line = ");
	scanf("%d",&n);
	for(r = 1; r <= n; r++)//line control or Row control
	{
		for(c = n; c>=r; c--) //value control loop 
		{
			printf("%d",c);  // Value 
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
