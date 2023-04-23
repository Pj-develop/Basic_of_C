#include <stdio.h>

int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}

int mod(int a,int b){
	return a%b;
}

void display(){
	printf("\n \t I AM DISPLAY FUNCTION FUNCTION IN C \t");
}

void ar(int a,int b){
	printf("\nThe Sum of the required Number is = %d",a+b);
	printf("\nThe Sub of the required Number is = %d",a-b);
	printf("\nThe Mul of the required Number is = %d",a*b);
	printf("\nThe Divide of the required Number is = %d",a/b);
}

int fact(int a){
	int i,f=1;
	for(i=a;i>0;i--){
		f=f*i;
	}
	printf("Factorial : %d",f);
	return f;
}


int main(){
	int a,b;
	printf("Enter 1st No.: ");
	scanf("%d",&a);
	printf("Enter 2nd No.: ");
	scanf("%d",&b);
	ar(a,b);
	fact(a);
	return 0;
}
