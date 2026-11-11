#include<stdio.h>
#include"student.h"

void add_stu(SLL **ptr)
{
	int num=1;
	SLL *new,*t;
	new=malloc(sizeof(SLL));
	new->next=0;

	while(1)
	{
		t=*ptr;
		while(t)
		{
		if((t->rollno)==num)
			break;
		t=t->next;
		}
		if(t==NULL)
			break;
		num++;
	}

	
	new->rollno=num;
	printf("enter name and marks\n");
l:	scanf("%s%f",new->name,&new->percentage);
	if(new->name==0)
	{
	printf("enter the valid name\n");
	goto l;
	}
	if((new->percentage) <0 || (new->percentage >100))
	{
	printf("enter valid marks\n");
	goto l;
	}
	if(*ptr==0)
		*ptr=new;
	else
	{
		SLL *last=*ptr;
		while(last->next)
			last=last->next;
		last->next=new;
	}
}
