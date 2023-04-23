#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include "myfunc.h"

FILE *fp, *ft;
struct medicin
    {
    	char id[20];
       char name[40];
       char company[20];
       char date[20];
    };
struct medicin e;
    char medicinename[40];
    long int recsize;
    char another;

void open(){
    fp = fopen("data.txt","r+");
    if(fp == NULL)
    {
        fp = fopen("data.txt","w+");
        if(fp == NULL)
        {
            printf("Cannot open file");
            exit(1);
        }
    }
    recsize = sizeof(e);
}
void about(){
}

void upd(){
}
void search(){
}

//
int about()
{
    system("cls");
    printf("This mini project in C for Medicine Record Management System , which is a console application without graphic.\nIn this project, you can add, modify, view and delete records of medicines.\nYou can also search for medicines added into stock. Search can be done by medicine name.\n");
    printf("\n\npress any key to go back...!!!");
    getch();
    menu();
//
//}
//



		


int add(){
//	KRO ISMA-ISKO COPY KIYA HAI NICHE SE
open();
	        system("cls");
	        fseek(fp,0,SEEK_END);
            
            another = 'y';
            while(another == 'y')
            {	printf("\nEnter Details Below : \n");
            	printf("\nEnter Medicine ID : ");fgets(e.id,sizeof(e.id), stdin);
				e.id[strcspn(e.id, "\n")] = '\0';
                printf("\nEnter Medicine Name : ");fgets(e.name,sizeof(e.name), stdin);
				e.name[strcspn(e.name, "\n")] = '\0';
				printf("\nEnter Medicine Company :");fgets(e.company,sizeof(e.company), stdin);
				e.company[strcspn(e.company, "\n")] = '\0';
				
                printf("\nEnter Valid Date of the Medicine: ");
                scanf("%s", &e.date);

                fwrite(&e,recsize,1,fp);

                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
                fflush(fp);
            }
            menu();
	
}

void dele(){
	
			open();
            system("cls");
            char another;
			another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of the medicine to delete: ");
                scanf("%s",medicinename);
                ft = fopen("Temp.txt","w");
                rewind(fp);
                while(fread(&e,recsize,1,fp) == 1)
                {
                    if(strcmp(e.name,medicinename) != 0)
                    {
                        fwrite(&e,recsize,1,ft);
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("data.txt");
                rename("Temp.dat","data.txt");
                fp = fopen("data.txt", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
        menu();
}
//
//int modify(){
//	
//			char another;
//            system("cls");
//            another = 'y';
//            while(another == 'y')
//            {
//                printf("Enter the medicine name to modify: ");
//                scanf("%s", medicinename);
//                rewind(fp);
//                while(fread(&e,recsize,1,fp)==1)
//                {
//                    if(strcmp(e.name,medicinename) == 0)
//                    {
//                        printf("\nEnter new name, company, and date: ");
//                        scanf("%s%s%s",e.name,&e.company,&e.date);
//                        fseek(fp,-recsize,SEEK_CUR);
//                        fwrite(&e,recsize,1,fp);
//                        break;
//                    }
//                }
//                printf("\nModify another record(y/n)");
//                fflush(stdin);
//                another = getche();
//            }
//            break;
//        
//	
//}
//
//
//int search() {
//			char another;
//            system("cls");
//            another = 'y';
//            while(another == 'y')
//            {
//                printf("\nEnter name of the medicine to delete: ");
//                scanf("%s",medicinename);
//                ft = fopen("Temp.dat","wb");
//                rewind(fp);
//                while(fread(&e,recsize,1,fp)==1)
//            {
//
//                printf("\n\n%s \t\t%s \t%s",e.name,e.company,e.date);
//            }
//            printf("Search another record(y/n)");
//                fflush(stdin);
//                another = getche();
//            }
//        
//}
//
int display(){
	FILE *fp, *ft;
    struct medicin
    {
       char name[40];
       char company[20];
       char date[20];
    };
    struct medicin e;
    char medicinename[40];
    long int recsize;
    fp = fopen("data.txt","rb+");
    if(fp == NULL)
    {
        fp = fopen("data.txt","wb+");
        if(fp == NULL)
        {
            printf("Cannot open file");
            exit(1);
        }
    }
    recsize = sizeof(e);

		char another;
		system("cls");
            printf("Stock List (name, company, date)");
            rewind(fp);
            while(fread(&e,recsize,1,fp)==1)
            {

                printf("\n\n%s \t\t%s \t%s",e.name,e.company,e.date);
            }
            getch();
            menu();

	
}


int main()
{

    menu();
}
