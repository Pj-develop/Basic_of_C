//Agenda ARRAY
//bubble sort: by compare n swap till sorted

#include <stdio.h>

int bsort(int arr1[],int size){
	int i,j,temp;
	//element check
	for (i;i<size-1;i++){
		for (j;j<size-1;j++){
			if (i>j){
				arr1[i]=temp;
				arr1[i+1]=arr1[i];
				arr1[i]=temp;}	
			}
		}
	return arr1;
	}
	
void dikhao(int arr1[],int size){
	int i,j;
	for(i=0;i<size;i++){
		printf("%d\n",arr1[i]);
	}
}


int main(){
	int arr1[5]={-2,45,0,11,-19};//array initialization
	int size;
	size=sizeof(arr1); ///sizeof(arr1[0]);
	printf("%d",size);
//	arr1={-2,45,0,11,-19};//
//	dikhao(arr1,size);
	
//	bsort(arr1,size);
//	dikhao(arr1,size);
}


