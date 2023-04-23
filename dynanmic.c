/* Dynamic Memory Allocation 
malloc() :__> memory allocation
void* malloc(size)---> size---> BYtes

calloc() --> Continous Memory Allocation
reallodc() ---> Reallocatoin of pre-occupied
free() ------> to release pre- occcupied memory

*/

#include <stdio.h>
#include <malloc.h>
//
//int main(){
//	int* ptr=(int*) malloc(100);
//	*ptr=200000;
//	printf("ptr:  %d",*ptr);
//	free(ptr);
//	}

int main(){
	int a=10;
	float f=10.10;
	void* ptr;
	
	ptr=&a;
	ptr =&f;
	printf("/n%f",*(float*)ptr);
	
}
