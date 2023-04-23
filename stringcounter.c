#include <stdio.h>

void main(){
	char s[]="BABA BA BA BAA";
	int i,j;
	j=1;
	int size;
	size=sizeof(s)/sizeof(s[0]);
	for (i=0;i<size;i++){
		if (s[i]==32){
			j++;
		}
	}
	printf("WORD COUNT IS :  %d :",j);
}
