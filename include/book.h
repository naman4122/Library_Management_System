#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip>
#include<windows.h>
using namespace std;
class book
{
    char bookno[5];
	char bookname[50];
	char authorname[50];

    public:
        void create_book();
        void show_book();
        void modify_book();
        char* returnbookno();
        void report();
};

#endif // BOOK_H
