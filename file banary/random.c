#include <stdio.h>
#include <stdlib.h>


void main(){
	FILE* fp;
	fp=fopen("test.txt","r");
//	printf("ENTER DAY (DD) : ");
//	scanf("%d",&Date.day);
//	scanf("%d",&temp.day);
	char ch;
	if ((fp=fopen("test.txt","r"))==NULL){
	printf("File Not Exist Created");
	exit(1);
	}
	fseek(fp,-1,SEEK_END);//SEEK_SET, SEEK_END, SEEK_CURRENT
	ch=getc(fp);
	printf("%c",ch);
//	for (n=1;n<5;n++){
//		fread(&temp,sizeof(struct Date),1,fptr);
//		printf("%d / %d / %d \n",temp.day,temp.month,temp.year);
//	
//	}
//	fclose(fptr);
	printf("\n File is Read Succesffuly");
	
}
