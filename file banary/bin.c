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
	fptr=fopen("welcome.bin","wb");
//	printf("ENTER DAY (DD) : ");
//	scanf("%d",&Date.day);
//	scanf("%d",&temp.day);
	if ((fptr=fopen("welcome.bin","wb"))==NULL){
	printf("File Is Not Created");
//	exit(1);
	}
	for (n=1;n<5;n++){
	temp.day=10+n;
	temp.month=2+n;
	temp.year=2020+n;
	fwrite(&temp,sizeof(struct Date),1,fptr);
	
	}
	fclose(fptr);
	printf("\n File is saved Succesffuly");
	
}
