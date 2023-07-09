#ifndef MENU_H
#define MENU_H
#include<fstream>
#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip>
#include<windows.h>
#include "book.h"
#include "student.h"
using namespace std;
class menu
{
    public:
        fstream fp,fp1;
        book bk;
        student st;

        void book_deposit();
        void book_issue();
        void display_allb();
        void display_alls();
        void delete_book();
        void modify_student();
        void modify_book();
        void display_sps(char n[]);
        void display_spb(char n[]);
        void write_student();
        void write_book();
        void admin_menu();
        void delete_student();
};

#endif // MENU_H
