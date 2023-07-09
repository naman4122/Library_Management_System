#include "student.h"
#include <iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string>
#include<iomanip>
#include<windows.h>
using namespace std;
#include "book.h"

void student::create_student()
	{
		system("cls");
	 	cout<<"\nNEW STUDENT ENTRY...\n";
		cout<<"\nEnter The admission no.:- ";
		cin>>admissionno;
		cout<<"\n\nEnter The Name of The Student:- ";
		cin>>name;
		token=0;
		studentbookno[0]='/0';
		cout<<"\n\n!!! Student Record Created Successfully !!!..";
	}

void student::show_student()
	{
		cout<<"\nAdmission no. : "<<admissionno;
		cout<<"\nStudent Name : ";
		cout<<name;
		cout<<"\nNo of Book issued : "<<token;
		if(token==1)
			cout<<"\nBook No:- "<<studentbookno;
	}

void student::modify_student()
	{
		cout<<"\nAdmission no. : ";
		cin>>admissionno;
		cout<<"\nModify Student Name : ";
		cin>>name;
	}

char* student::returnadmissionno()
	{
		return admissionno;
	}

char* student::returnstudentbookno()
	{
		return studentbookno;
	}

int student::returntoken()
	{
		return token;
	}

void student::addtoken()
	{
	    token=1;
    }

void student::resettoken()
	{
	    token=0;
    }

void student::getstbno(char t[])
	{
		strcpy(studentbookno,t);
	}

void student::report()
	{
	    cout<<"\t"<<admissionno<<setw(20)<<name<<setw(10)<<token<<endl;
    }

