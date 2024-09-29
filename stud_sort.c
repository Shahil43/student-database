#include "header.h"
void sort_list_name(sll *ptr){
	sll *p1=ptr,*p2,*lst=ptr,t;
	int i,j,c=0;

	if(ptr==0){
		printf("no data fpund \n");
		return;
	}

	while(lst){
		c++;
		lst=lst->next;
	}

	//printf("%d \n",c);

	for(i=0;i<c;i++){
		p2=p1->next;
		for(j=0;j<c-i-1;j++){
			if((strcmp(p1->name,p2->name))>0){

				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.perc=p1->perc;


				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->perc=p2->perc;


				p2->rollno=t.rollno;
				strcpy(p1->name,t.name);
				p1->perc=t.perc;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}

}


void sort_list_perc(sll *ptr){
	sll *p1=ptr,*p2,*lst=ptr,t;
	int i,j,c=0;

	if(ptr==0){
		printf("no data fpund \n");
		return;
	}

	for(i=0;i<c;i++){
		p2=p1->next;
		for(j=0;j<c-i-1;j++){

			if((p1->perc)>(p2->perc)){
				t.rollno=p1->rollno;
				strcpy(t.name,p1->name);
				t.perc=p1->perc;


				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->perc=p2->perc;


				p2->rollno=t.rollno;
				strcpy(p1->name,t.name);
				p1->perc=t.perc;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}
