//file handling
#include <stdio.h>

void main(){
	FILE *fp;//declare file pointer
	//fopen(filename.,w);
	//write new file and append to retain data
	fp=fopen("FirstPrintFile.txt","a");
	//write file
	//fprintf(file pointer,"TEXT")
	char ar[100];
	printf("ENTER DATA : ");
	scanf("%s",&ar);
	fprintf(fp,ar);
	fclose(fp);

}
