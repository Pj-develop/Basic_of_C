#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i;
	printf("\n Printing Base Address of the Array: ");
	printf("\n %u %u %u : ",&a[0],a,&a);
	printf("\n %d %d %d : ",(&a[0]),*(a),*(&a));
	printf("\n %d \t %d \t %d ",(a[1]),*(a+1),1[a]);
	printf("\n Prining adress");
	for (i=0;i<5;i++){
		printf("\n %u",&a[i]);
		
	}
	return 0;
}
