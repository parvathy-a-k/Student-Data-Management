#include"student.h"
void reverse(SLL **ptr)
{
int c;
if(ptr==0)
{
printf("no record found\n");
return;
}

c=countNode(*ptr);
if(c>1)
{
	int i;
	SLL *t=*ptr;
	SLL **a=malloc(sizeof(SLL *)*c);
	for(i=0;i<c;i++)
	{
		a[i]=t;
		t=t->next;
	}

for(i=c-1;i>0;i--)
a[i]->next=a[i-1];
a[0]->next=0;
*ptr=a[c-1];
}
}

int countNode(SLL *ptr)
{
int c=0;
while(ptr)
{
c++;
ptr=ptr->next;
}
return c;
}
