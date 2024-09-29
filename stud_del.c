#include "header.h"
#include <stdio.h>
#include <unistd.h>

void stud_del_rollno(sll **ptr){

	sll *del,*prev;
	int num;
	del=*ptr;
	printf("enter the roll no to delete:\n");
	scanf("%d",&num);
	if(*ptr==0){
		printf("no data to delete \n");
		return;
	}


	while(del){
		if(del->rollno==num){
			if(*ptr==del)
				*ptr=del->next;
			else
				prev->next=del->next;
			printf("deleted \n");
			free(del);
			return;
		}

		prev=del;
		del=del->next;

	}
        printf("rollno is not present \n");
}



void stud_del_name(sll **ptr){

	sll *del,*prev;
	char s[10];
	printf("enter the name to delete:\n");
	scanf("%s",s);
	del=*ptr;

	if(*ptr==0){
		printf("no data to delete \n");
		return;
	}
	while(del){
		 if(strcmp(del->name,s)==0){
			if(*ptr==del)
				*ptr=del->next;
			else
				prev->next=del->next;
			printf("deleted \n");
			free(del);
			return;
		}
		prev=del;
		del=del->next;
	}
        printf("name is not present \n");
}
void delete_all(sll **ptr){
	sll *del=*ptr;
	int c=1;
	while(del){
		*ptr=del->next;
		printf("no de del %d \n",c++);
		sleep(1);
		free(del);
		del=*ptr;
	}
}
