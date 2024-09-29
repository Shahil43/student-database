#include "header.h"
void stud_add(sll **ptr){
	sll *new,*last;
	new=malloc(sizeof(sll));
	printf("enter name and percentage \n");
	scanf("%s %f",new->name,&new->perc);
	new->next=0;
	if(*ptr==0){
		new->rollno=1;
		*ptr=new;
	}
	else{
		last=*ptr;
			while(last->next){
				last=last->next;
			}

			new->rollno=last->rollno;
			new->rollno=new->rollno+1;
		last->next=new;
	}
} 
