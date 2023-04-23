#include <stdio.h>

/* Structure : It is User Defined Data Type
we Define it-heterogeneous-collection of diff or similar data members
syntax to declare structure data type
struct <identfier or name>
{ 
data type member1;
};
*/
struct Student
{
	char roll_No[10];//data member
	char Name[20];
	char Class[10];
	float Fees;
};

struct Employee
{
	char emp_id[10];
	char name[20];
	char fname[20];
	char doj[20];
	char uan[20];
	char esic[20];
	char dept[20];
	char location[20];
	int salary;
};

struct Date{
	int day;
	int month;
	int year;
};

//Variable of Structure
//how to declare a variiabel of structure
//data type var name : ex: int a;
//similary , student s1; student variable

void main(){
struct Student s1={"111","Priyanshu Jha","LPU",9521 };
printf("Roll No.: %s \n",s1.roll_No);
printf("Name : %s \n",s1.Name);
printf("Class : %s \n",s1.Class);
printf("Fees Amount Paid : %f \n",s1.Fees);
}

