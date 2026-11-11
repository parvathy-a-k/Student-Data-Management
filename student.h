#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct student
{
int rollno;
char name[50];
float percentage;
struct student *next;
} SLL;

void add_stu(SLL **);
void del_stu(SLL **);
void list(SLL *);
void modify_stu(SLL **);
void save_stu(SLL *);
void load(SLL **);
void exit_menu(SLL *);
void delete_all(SLL **);
int countNode(SLL *);
void sortdata(SLL *);
void reverse(SLL **);
