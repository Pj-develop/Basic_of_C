#include <stdio.h>

void main(){
	int i,n,p=0;
	printf("ENTER NO.: ");
	scanf("%d",&n);
	i=2;
	while (i<n){
		if (n%i==0){
		printf("NOT PRIME");
		break;
		}
		else{
			printf("PRIME");
			break;
		}
		i++;		
	}
}

//opt

