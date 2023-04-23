#include <stdio.h>

void printAr(int arr1[]){
	printf("%d",arr1);
	int size;
	size=sizeof(arr1)/sizeof(arr1[0]);
	printf("size %d \n",size);
	int i=0;
	for (i=0;i<size;i++){
		printf("%d ",arr1[i]);
	}
	
}
int main(){
	int list1[]={9,7,5,3,1,0,22};
//	int size=sizeof(list1);
//	printf("%d \n",size);
	printAr(list1);
	
}
