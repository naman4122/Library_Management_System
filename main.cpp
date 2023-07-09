#include <iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip>
using namespace std;
#include "book.h"
#include "student.h"
#include "menu.h"

int main()
{
    menu m;
    char ch;
	system("cls");
	cout<<"\n\n\n\n\t\t\t   LIBRARY MANAGEMENT";
	cout<<"\n\n\t\t\t\tSYSTEM";
	cout<<"\n\n\n\n\n\tMade By : Naman Patel (202001236)";
	cout<<"\n\n\t\t  Harsh Ramoliya (202001155)";
	cout<<"\n\n\n\n\tCollege : Dhirubhai Ambani Institute of Information and Communication Technology";
	cout<<"\n             ";
	getch();
	do
	{
		system("cls");//To clear the output screen
		cout<<"\n\n\t\tMAIN MENU"<<endl;
		cout<<"\n\t1. BOOK ISSUE"<<endl;
		cout<<"\n\t2. BOOK DEPOSIT"<<endl;
		cout<<"\n\t3. ADMINISTRATOR MENU"<<endl;
		cout<<"\n\t4. EXIT"<<endl;
		cout<<"\n\tPlease Select Your Option (1 to 4):- "<<endl;
		ch=getche();
		switch(ch)
		{
			case '1':system("cls");
				 m.book_issue();
				 break;
			case '2':
			    m.book_deposit();
				 break;
			case '3':
			    m.admin_menu();
				 break;
			case '4':
			    exit(0);
			default :cout<<"\a";
		}
	}while(ch!='4');

    return 0;
}
