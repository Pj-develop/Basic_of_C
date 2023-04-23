#include <stdio.h>
#include <stdlib.h>


void main(){
	FILE* fp;
	fp=fopen("test.txt","r");
	char ch;
	if ((fp=fopen("test.txt","r"))==NULL){
	printf("File Not Exist Created");
	exit(1);
	}
	int n;
	for (n=0;n<10;n++){
		fseek(fp,n,SEEK_SET);//SEEK_SET, SEEK_END, SEEK_CURRENT
		ch=getc(fp);
		printf("%c",ch);
	}
//	fclose(fptr);
	printf("\n File is Read Succesffuly");
	
}
