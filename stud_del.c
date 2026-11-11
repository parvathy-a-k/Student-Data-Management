#include"student.h"

void del_stu(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("no record found\n");
		return ;
	}
	char ch;
	int num;
	printf("Enter your choice\n");
	printf("r/R : Enter roll number to delete\nn/N : Enter name to delete\n");

	scanf(" %c",&ch);

	if(ch=='r' || ch=='R')
	{
l:
		printf("enter the number\n");
		scanf("%d",&num);
		SLL *del=*ptr,*prev;
		while(del)
		{
			if(num==del->rollno)
			{
				if(*ptr==del)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("roll not found\n");
	}

	else if(ch=='n' || ch=='N')
	{
		char name[50];
		printf("enter the name to delete\n");
		scanf("%s",name);

		SLL *del=*ptr,*prev,*t;

		t=*ptr;
		int flag=0;
		while(t)
		{
			if(strcmp(t->name,name)==0)
			{
				flag++;
			}
			t=t->next;
		}
		if(flag>1)
		{
			printf("the name comes more than once, please enter the roll number to delete\n");	
			t=*ptr;
			while(t)
			{

				if(strcmp(t->name,name)==0)
					printf("%d %s\n",t->rollno,t->name);
				t=t->next;
			}
			goto l;
		}

		while(del)
		{
			if(strcmp(del->name,name)==0)
			{
				if(*ptr==del)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("name not found\n");
	}



}


void delete_all(SLL **ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}

	SLL *del=*ptr;
	int c=1;
	while(del)
	{
		*ptr=del->next;
		printf("Node position %d deleted\n",c++);
		sleep(1);
		free(del);
		del=*ptr;
	}

}
