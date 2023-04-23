#include <stdio.h>

//int main(){
//	int s;
//	printf("ENTER NO. FOR TABLE : ");
//	scanf("%d",&s);
//	int o=1;
//	while (o<=10){
//		printf("\n %d x %d = %d",s,o,s*o);
//		o++;
//	}
//	int i;
//	for (i=1;i<=10;i=i+1){
//		printf("\n %d X %d = %d",s,i,s*i);
//	}
//	return 0;
//}

int main(){
	printf("\n ENTER A NO. TO REVERSE: ");
	int n1;
	scanf("%d",&n1);
	while (n1!=0){
		int ldig;
		ldig=n1%10;
		printf("%d",ldig);
		n1=n1/10;
		
//	printf("\n%d",ldig);	
	}
	
}

int main(){
	int i=0;
	int sum=0;
	
	for(i;i<=10;i++){
		sum=sum+i;
	}
	printf("\n %d",sum);
	return 0;
}
