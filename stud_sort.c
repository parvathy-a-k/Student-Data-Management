#include "student.h"

void sortdata(SLL *ptr)
{
	if(ptr==0)
	{
		printf("no record found\n");
		return;
	}

	SLL *p1=ptr,*p2,t;
	char ch;
	int i,j,c=countNode(ptr);
	printf("enter your choice\nn : sort with name\np : sort with percentage\n");
	scanf(" %c",&ch);
	for(i=0;i<c-1;i++)
	{
		p2=p1->next;
		for(j=0;j<c-1-i;j++)
		{	if(ch=='n'||ch=='N')
			{
				if(strcmp(p1->name,p2->name)>0)
				{
					t.rollno=p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;
				}
			}
			else if(ch=='p'||ch=='P')
			{
				if((p1->percentage)>p2->percentage)
				{
					t.rollno=p1->rollno;
					strcpy(t.name,p1->name);
					t.percentage=p1->percentage;

					p1->rollno=p2->rollno;
					strcpy(p1->name,p2->name);
					p1->percentage=p2->percentage;

					p2->rollno=t.rollno;
					strcpy(p2->name,t.name);
					p2->percentage=t.percentage;


				}
			}
			p2=p2->next;
		}
		p1=p1->next;
	}

}
