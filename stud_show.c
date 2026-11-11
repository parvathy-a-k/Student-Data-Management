#include"student.h"

void list(SLL *ptr)
{

printf("*************\n");
if(ptr==0)
{
printf("no record found\n");
return;
}
while(ptr)
{
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}

printf("**************\n");

}
