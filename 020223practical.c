#include <stdio.h>

int main(){
	int a,b;
	printf("Enter 1st No.: ");
	scanf("%d",&a);
	printf("Enter 2nd No.: ");
	scanf("%d",&b);
	printf("\nThe Sum of the required Number is = %d",a+b);
	printf("\nThe Sub of the required Number is = %d",a-b);
	printf("\nThe Mul of the required Number is = %d",a*b);
	printf("\nThe Divide of the required Number is = %d",a/b?a/b:printf("ERROR"));
	return 0;
}
