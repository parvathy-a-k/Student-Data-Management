#include<stdio.h>
#include "student.h"
int main()
{

	SLL *headpointer=0;
	char op;


	load(&headpointer);
	while(1)
	{

		printf("******* STUDENT RECORD MENU *******\n");
		printf("\na/A : Add new record\nd/D : Delete a record\ns/S : Show the list of students\nm/M : Modify a record\nv/V : Save records\nt/T : Sort the records\nl/L : Delete all the records\nr/R : Reverse the records\ne/E : Exit\n");

printf("Enter the option\n");
		scanf(" %c",&op);
		switch(op)
		{
			case 'a' : 
			case 'A' :
				add_stu(&headpointer);break;
			case 's' : 
			case 'S' :
				list(headpointer);break;
			case 'd' : 
			case 'D' :
				del_stu(&headpointer);break;
			case 'm' : 
			case 'M' :
				modify_stu(&headpointer);break;
			case 'v' : 
			case 'V' :
				save_stu(headpointer);break;
			case 'e' : 
			case 'E' :
				exit_menu(headpointer);break;
			case 'l' : 
			case 'L' :
				delete_all(&headpointer);break;
			case 'r' : 
			case 'R' :
				reverse(&headpointer);break;
			case 't' :
			case 'T' :
				sortdata(headpointer);break;
			default : printf("invalid option\n");break;
		}
	}
}

void exit_menu(SLL *ptr)
{
	printf("enter the choice\n");
	printf("\ns : save and exit\ne : exit\n");

	char ch;
	scanf(" %c",&ch);

	if(ch=='s'||ch=='S')
	{
		save_stu(ptr);
		exit(0);
	}

	else if(ch=='e'||ch=='E')
		exit(0);

}
