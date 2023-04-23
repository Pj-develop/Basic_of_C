#include <stdio.h>
struct Student
{
	char roll_No[10];//data member
	char Name[30];
	char Class[10];
	float Fees;
};

struct Date{
	int day;
	int month;
	int year;
};

//Array of structure

void main(){
//struct Student s1={"111","Priyanshu Jha","LPU",9521 };

struct Student s[3];//Array Structure
int i;
for(i=0;i<3;i++){
	printf("Enter Student %d Roll No.= ",i+1);
	scanf("%s",&s[i].roll_No);
	printf("Enter Student %d Name = ",i+1);
	scanf("%s",&s[i].Name);
	printf("Enter Student %d Class= ",i+1);
	scanf("%s",&s[i].Class);
	printf("Enter Student %d fees= ",i+1);
	scanf("%f",&s[i].Fees);

}
printf("\n -------------------->Student Information<------------------------");
printf("\n Roll No.: \t Name : \t Branch : \t Fees: \n");
printf("\n*******************************************************************\n");
for (i=0;i<3;i++){
	printf("\n %s  \t \t %s \t %s \t %2f \t \n",s[i].roll_No,s[i].Name,s[i].Class,s[i].Fees);
	
};

}
