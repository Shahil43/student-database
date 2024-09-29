#include "header.h"

void reverse_node(sll **ptr){
	sll *lst=*ptr;
	int c=0;
	while(lst){
		c++;
		lst=lst->next;
	}

	if(*ptr==0){
		printf("no data found \n");
		return;
	}


	if(c>1){
		sll **p,*t=*ptr;
		p=malloc(sizeof(sll)*ptr)
			int i=0;
		while(t){
			p[i++]=t;
			t=t->next;
		}
		for(i=0;i<c;i++)
			p[i]->next=p[i-1];

		p[0]->next=0;
		*ptr=p[c-1];

	}




}
