#include <stdio.h>
#include <stdlib.h>


void main(){
	FILE* fp;
	fp=fopen("test.txt","r");
	char str[50];
	if ((fp=fopen("test.txt","r"))==NULL){
	printf("File Not Exist Created");
	exit(1);
	}
	int n;
	while (fscanf(fp,"%s",str)!=EOF)
	{
		printf("\n%s",str);
	}
	rewind(fp);
	while (fscanf(fp,"%s",str)!=EOF)
	{
		printf("\n%s CURSOR AT POSITION : %d ",str,ftell(fp));
	}
	fclose(fp);
	printf("\n File is Read Succesffuly");
	
}
