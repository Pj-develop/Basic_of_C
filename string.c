#include <stdio.h>
#include <string.h>

//string is character array
//char name[20]
void main(){
	char fname[20]="Priyanshu";
	char mname[]="Kumar";
	char *lname="Kumar";
//	printf("\n%s\t%s\t%s",fname,mname,lname);
//	printf("\n%d\t%d\t%d",sizeof(fname),sizeof(mname),sizeof(lname));
//	

//strcmp(1st string, 2nd string)==0  : String comparision


	if (strcmp(mname,lname)==0)
	printf("WIN");
	else
	printf("SUCCESS");
	
	//strlen : length of string
	printf("%d",strlen(mname));
	
	//strcat : concatenation
	strcat(fname," Jha");
	printf("\n%s",fname);
	
	
	//strrev : reverse a string
	//strcpy : copy a string
	char revse[20];
	strcpy(revse,fname);
	printf("\n%s",revse);
	printf("\n%s",strrev(revse));
		
}
