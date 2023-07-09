#ifndef STUDENT_H
#define STUDENT_H

class student
{
    char admissionno[6];
	char name[20];
	char studentbookno[6];
	int token;
    public:
        void create_student();
        void show_student();
        void modify_student();
        char* returnadmissionno();
        char* returnstudentbookno();
        int returntoken();
        void addtoken();
        void resettoken();
        void getstbno(char t[]);
        void report();
};

#endif // STUDENT_H
