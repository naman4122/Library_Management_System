#include "book.h"
#include <iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string>
#include<iomanip>
#include<windows.h>
#include <sstream>
using namespace std;

void book::create_book()
	{
		cout<<"\nNEW BOOK ENTRY...\n";
		cout<<"\nEnter The book no.:- ";
		cin>>bookno;
		//cout<<"\n\nEnter The Name of The Book:- ";
		gets(bookname);
		cout<<"\n\nEnter The Name of The Book:- ";
		gets(bookname);
		cout<<"\n\nEnter The Author's Name:- ";
		gets(authorname);
		cout<<"\n\n\nBook Created Successfully..";
	}

	void book::show_book()
	{
		cout<<"\nBook no. : "<<bookno;
		cout<<"\nBook Name : "<<bookname;
		cout<<"\nAuthor Name : "<<authorname;
	}

	void book::modify_book()
	{
		cout<<"\nBook no. : "<<bookno;
		cout<<"\nModify Book Name : ";
		gets(bookname);
		cout<<"\nModify Author's Name of Book : ";
		gets(authorname);
	}

	char* book::returnbookno()
	{
		return bookno;
	}

	void book::report()
	{
	    cout<<bookno<<setw(30)<<bookname<<setw(30)<<authorname<<endl;
    }
