#include "header.h"
void stud_show(sll *ptr){
	sll *last=ptr;
	if(last==0){
	printf("no data found \n");
	return;
		}
	while(last){
		printf("%d %s %f \n",last->rollno,last->name,last->perc);
		last=last->next;
	}
}
