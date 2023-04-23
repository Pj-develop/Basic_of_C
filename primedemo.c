/*
  Pattern Printing Program
Pattern 1:

  *
  **
  ***
  ****
  
  1
  12
  123
  1234
  
  A
  AB
  ABC
  ABCD
  
*/

#include<stdio.h>
void main()
{
	int i,n; 
	int flag = 0; 	
	printf("\nEnter number of line = ");
	scanf("%d",&n);
	for(i = 2; i < n; i++)//line control or Row control
	{
		if(n%i==0)
		{
			flag = 1; 
			break;
		}		
	}
	if(flag == 1)
	{
		printf("Not Prime");
	}
	else
	{
		printf(" Prime");
	}
	 
}

