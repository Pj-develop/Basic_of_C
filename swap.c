#include <stdio.h>

int swap(int a,int b){
	int a=1,b=2,c;
	printf("%d %d\n",a,b);
	c=a;a=b;b=c;
	printf("%d %d\n",a,b);
	
}
int main(){
	int a=1,b=2,c;
	printf("%d %d\n",a,b);
	c=a;a=b;b=c;
	printf("%d %d\n",a,b);
}
