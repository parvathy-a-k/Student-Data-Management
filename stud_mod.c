#include"student.h"

void modify_stu(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("no record found\n");
		return ;
	}
	char ch;
	int num;
	printf("Enter which record to search for modification\n");
	printf("r/R : search by roll no\nn/N : search by name\np/P : search by percentage\n");

	scanf(" %c",&ch);

	if(ch=='r' || ch=='R')
	{
l:
		printf("enter the roll number\n");
		scanf("%d",&num);
		SLL *t,*mod=*ptr;
		t=*ptr;
		while(t)
		{
			if((t->rollno)==num)
			{
				printf("%d %s %f\n",t->rollno,t->name,t->percentage);

				printf("enter the desired name and marks\n");
				scanf("%s%f",t->name,&t->percentage);
			}
			t=t->next;
		}

		if(t==NULL)
			printf("roll no not found\n");
		return;
	}

	else if(ch=='n' || ch=='N')
	{

		char name[50];
		printf("enter the name to modify\n");
		scanf("%s",name);

		SLL *mod=*ptr,*t;

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
			printf("the name comes more than once, please enter the roll number to modify\n");	
			t=*ptr;
			while(t)
			{

				if(strcmp(t->name,name)==0)
					printf("%d %s\n",t->rollno,t->name);
				t=t->next;
			}
			goto l;
		}

		while(mod)
		{
			if(strcmp(mod->name,name)==0)
			{
				printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
				printf("enter the desired name and marks\n");
				scanf("%s%f",mod->name,&mod->percentage);
			}
			mod=mod->next;
		}
		if(mod==NULL)
		printf("name not found\n");
		return;

	}

}
