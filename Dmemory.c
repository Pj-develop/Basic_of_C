#include <stdio.h>
#include <string.h>
//void main(){
//	int a=10;
//	int *p=&a;
//	printf("%d",*p);
//	
//}


struct Date{
unsigned int day;
unsigned int month;
unsigned int year;
};

struct Student{
	char roll_no[20];
	char name[20];
	float fees;
	struct Date dob;	
};
void main(){
struct Student s1;
//s1.roll_no="111";
strcpy(s1.roll_no,"111");
//s1.name="Priyanshu";
strcpy(s1.name,"Priyanshu");
s1.fees=10000;
s1.dob.day=13;
s1.dob.month=4;
s1.dob.year=2023;
printf("Name: %s \n Roll No.: %s\n Fees : %.2f\n DOB : %d / %d / %d \n",s1.name,s1.roll_no,s1.fees,s1.dob.day,s1.dob.month,s1.dob.year);

//today.day=13;
//today.month=4;
//today.year=2023;
//printf("%d/%d/%d",today.day,today.month,today.year);

}
