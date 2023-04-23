#include <stdio.h>
int main(){
	int n=5;
	int a=65;
	int i,j;
	for(i=1,a=65;i<=n;i++,a++){
		for (j=1;j<=i;j++){
			printf("%c",a);
		}
		printf("\n",a);
	}
	return 0;
}

//patern 1
//	int n=5;
//	int i,j;
//	for(i=0;i<n;i++){
//		for (j=0;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//		
//	}


//Pattern 2
//for(i=0;i<n;i++){
//		for (j=n;j>i;j--){
//			printf("*");
//		}
//		printf("\n");
//	}


//PATERN 3
//	for(i=1;i<=n;i++){
//		for (j=1;j<=i;j++){
//			printf(" ");
//		}
//		for (j=n;j>=i;j--){
//			printf("*");
//		}
//		printf("|\n");
//	}

//Patern 4
//for(i=1;i<=n;i++){
//		for (j=n;j>=i;j--){
//			printf(" ");
//		}
//		for (j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("|\n");
//	}
