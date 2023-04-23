


void menu()
{
system("cls");
printf("\n\t*************** WELCOME TO MEDICINE RECORD MANAGEMENT SYSTEM ******************\n\n");
printf(" \n\t  ::::::::::::::::::::::::::  | MEDICINE MENU |  :::::::::::::::::::::::::: \n");
printf("\n\n\t[1] Add  Medicine Records\n   \t[2] Delete Medicine Records\n   \t[3] Update Medicine Records\n \t[4] Display Medicine Records\n \t[5] Search Medicine Records\n \t[6] About Us \n \t[7] Exit \n");
printf ("\n\t Press the Options From above to Proceed Further : ");
switch(getch())
{
    case '1':
        add();
    break;
   case '2':
       dele();
    break;
    case '3':
        upd();
    break;
    case '4':
        display();
    break;
    case '5':
        search();
	break;
	case '6':
        about();
    break;
    case '7':
        exit(0);
    break;
    default:
            printf("\n\n\t !!!Enter Options from 1 to 7 only !!!");
            printf("\n\t ! Press Any Key for continue.......");
            getch();
            system("cls");
menu();
}
}



void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10];
    char user[10]="admin";
    char pass[10]="admin";
    do
{

    printf("\n  ::::::::::::::::::::::::::  LOGIN FORM  ::::::::::::::::::::::::::  ");
    printf(" \n                       ENTER USERNAME:-");
	scanf("%s", &uname);
	printf(" \n                       ENTER PASSWORD:-");
	while(i<7)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	i=0;
		if(strcmp(uname,"admin")==0 && strcmp(pword,"admin")==0)
	{
	printf("  \n\n\n       WELCOME TO MEDICINE RECORD MANAGEMENT SYSTEM !!!! LOGIN IS SUCCESSFUL");
	    printf("\n LOADING PLEASE WAIT... \n");
    for(i=0; i<10; i++)
    {
        printf(".");
        Sleep(500);
    }
	printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();
	menu();
	break;
	}
	else
	{
		printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;

		getch();

	}
}
	while(a<=2);
	if (a>2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");

		getch();

		}
		system("cls");
}

