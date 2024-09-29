#include "header.h"
void search_rollno(sll *ptr){
	sll *lst=ptr;
	int num;

	printf("enter thr oll no to search :\n");
	scanf("%d",&num);
	while(lst){
		if(lst->rollno==num){
			printf("enter new updates data \n");
			scanf("%s %f",lst->name,lst->perc):

		}
		lst=lst->next;
	}
}

void search_name(sll *ptr){

	sll *lst=ptr;
	char s[10];
	int num,c=0;

	printf("enter thr name to search :\n");
	scanf("%s",s);
	while(lst){
		if((strcmp(s,lst->name))==0){
			c++;
			if(c>1){
				printf("enter rollno to modify : \n");
				scanf("%d",&num);

				if(lst->rollno==num){

					printf("enter new updates data \n");
					scanf("%s %f",lst->name,lst->perc):
				}
			}
			printf("enter new updates data \n");
			scanf("%s %f",lst->name,lst->perc):


		}
		lst=lst->next;
	}

}

void search_rollno(sll *){

	sll *lst=ptr;
	int num,c=0;

	printf("enter thr percentage to search :\n");
	scanf("%d",&num);
	while(lst){
		if(lst->perc==num){
			c++;
			if(c>1){
				printf("enter rollno to modify : \n");
				scanf("%d",&rnum);
				if(lst->rollno==rnum){
					printf("enter new updates data \n");
					scanf("%s %f",lst->name,lst->perc):
				}
				printf("enter new updates data \n");
				scanf("%s %f",lst->name,lst->perc):
			}
			lst=lst->next;
		}
	}
}
