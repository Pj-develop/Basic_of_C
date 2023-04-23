#include <stdio.h>

void main(){
	char s[]="BABA BA BA BAA";
	int i,j;
	j=1;
	int size;
	size=sizeof(s)/sizeof(s[0]);
	for (i=0;i<size;i++){
		if (s[i]=='A'){ //or (s[i]=='A');{
			s[i]="#";
		}
	}
	for (i=0;i<size;i++){
		printf("%s",s[i]);
}
}
