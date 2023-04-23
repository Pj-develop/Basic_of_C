#include <stdio.h>
int  main(){
	char f[20];
	printf("Enter Name: ");
	scanf("%[^\n]%*c",&f);
	printf("%s",f);
	return 0;
	
}
