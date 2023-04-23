//file handling
#include <stdio.h>

void main(){
	FILE *fp;//declare file pointer
	//fopen(filename.,w);
	fp=fopen("hello.txt","r");
	//read file
	char buffer[100];
	//fgets(buffer,buffer size, file pointer)
	int size=sizeof(buffer)/sizeof(buffer[0]);
	while(fgets(buffer,size,fp)){
		printf("\n%s",buffer);
	};
//	puts(buffer);
	fclose(fp);
//	if (fp!=NULL)
//	printf("OPENED");
//	else
//	printf("NOT OPENED");
}
