#include <stdio.h>
#include <stdlib.h>
//#include <process.h>

void main(){
	int a,b,o;
	printf("Enter 1st No.: ");
	scanf("%d",&a);
	printf("Enter 2nd No.: ");
	scanf("%d",&b);
	printf("\n \t \t ARITHMATIC CALCULATOR\t \t \n");
	printf("\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Remainder \n 6. Exit \n");
	printf("Enter Your Choice (1-6): ");
	scanf("%d",&o);
	
	switch (o)
	{
	case 1:
	printf("\nAddition: %d",a+b);
	break;
	case 2:
	printf("\nSubtraction: %d",a-b);
	break;
	case 3:
	printf("\nMultiplication: %d",a*b);
	break;
	case 4:
	printf("\nDivision: %d",a/b);
	break;
	case 5:
	printf("\nRemainder: %d",a%b);
	break;
	case 6:
	printf("\nExited............................................!!");
	exit(1);
	break;
	default:
		printf("\nWRONG INPUT\n");
	}
}
