#include"student.h"

void save_stu(SLL *ptr)
{

	FILE *fp;
//	SLL *new=*ptr;
	

	
	
		printf("printing to new file\n");
		fp=fopen("student.dat","w");
		while(ptr)
		{
			fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
			ptr=ptr->next;
		}
		printf("data saved\n");
		fclose(fp);	

	
}
