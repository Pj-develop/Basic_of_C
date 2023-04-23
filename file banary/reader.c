#include <stdio.h>
#include <stdlib.h>

struct Date{
	int day;
	int month;
	int year;
};



void main(){
	int n;
	struct Date temp;
	FILE* fptr;
	fptr=fopen("welcome.bin","rb");
//	printf("ENTER DAY (DD) : ");
//	scanf("%d",&Date.day);
//	scanf("%d",&temp.day);
	if ((fptr=fopen("welcome.bin","rb"))==NULL){
	printf("File Is Not Created");
//	exit(1);
	}
	for (n=1;n<5;n++){
		fread(&temp,sizeof(struct Date),1,fptr);
		printf("%d / %d / %d \n",temp.day,temp.month,temp.year);
	
	}
	fclose(fptr);
	printf("\n File is Read Succesffuly");
	
}
