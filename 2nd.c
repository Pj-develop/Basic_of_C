#include<stdio.h>
void main()
{
	int a=5; int b=5;
	int c=++a;
	int b=a<<2;//d=2**a for <<       ; n * 2**m
	int d=a>>2;//d=2**a for <<       ; n/2**m
	printf("\n Value of a = %d",a);
	printf("\n Value of b = %d",b);
	printf("\n Value of c = %d",c);
	printf("\n Value of d = %d",d);
}
//ternary operator
//	int a=55, b=10;
//	int c =a>=b?a:b;
//	a>=b?printf("Welcome"):printf("BYE");
//	printf("welcome")?printf("WELCOME"):printf("BYE");
//	int c=a>=b?a:b;
//	

