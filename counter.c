#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
	char str[]="ABCD 3434  2344E";
	char str1[10];
	int i,j;
	j=0;	
	int size=sizeof(str)/sizeof(str[0]);
	for (i=0;i<size;i++){
		if (isdigit(str[i])!=0){
			strcpy(str1,str);
			printf("%c",str[i]);
			j++;
			
		}
	
	}
	printf("\nCOUNT IS : %d ",j);
	
}
