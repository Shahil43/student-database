#include "header.h"

void main(){
	sll *head=0;
	char op,choice,op1;
	while(1){
		printf("+-------------------------------+\n");
		printf("| *****STUDENT RECORD MENU***** |\n");		
		printf("|-------------------------------|\n");
		printf("|a/A :add new record 		|\n");
		printf("|d/D :delete a record 		|\n");
		printf("|s/S :show the list		|\n");
		printf("|m/M :modify a record 		|\n");
		printf("|v/V :save			|\n");
		printf("|e/E :exit			|\n");
		printf("|t/T :sort the list		|\n");
		printf("|l/L :delete all records	|\n");
		printf("|r/R :reverse the list		|\n");
		printf("|				|\n");
		printf("| Enter your choice: 	  	|\n");
		printf("|				|\n");
		printf("+-------------------------------+\n");
		scanf(" %c",&op);



		switch(op){
			case 'a': 
			case 'B': stud_add(&head);break; 
			case 'd': 
			case 'D':
				  printf("+-------------------------------+\n");
				  printf("| *****DELETE MENU*****         |\n");		
				  printf("|-------------------------------|\n");
				  printf("|				  |\n");
				  printf("| r/R : enter rollno to delete  |\n");
				  printf("|				  |\n");
				  printf("|n/N :enter name to delete	  |\n");
				  printf("+-------------------------------+\n");
				  scanf(" %c",&choice);

				  switch(choice){
					  case 'R': stud_del_rollno(&head);break;
					  case 'r': stud_del_rollno(&head);break;
					  case 'N': stud_del_name(&head);break;
					  case 'n': stud_del_name(&head);break;}
						    break;
			case 's': 
			case 'S': stud_show(head);break;
			case 'v': 
			case 'V': 
				  printf("+-------------------------------+\n");
				  printf("| *****SAVE   MENU*****         |\n");		
				  printf("|-------------------------------|\n");
				  printf("|			          |\n");
				  printf("|s/S : save and exit  	  |\n");
				  printf("|				  |\n");
				  printf("|e/E : exit without save        |\n");
				  printf("+-------------------------------+\n");
				  scanf(" %c",&op1);

				  switch(op1){
					  case 's': 
					  case 'S': stud_save_exit(head);break;
					  case 'E':
					  case 'e': exit(0);break;}
						    break;

			case 'm': 
			case 'M':
						    printf("+-------------------------------+\n");
						    printf("|**enter record to search menu**|\n");		
						    printf("|-------------------------------|\n");
						    printf("|			            |\n");
						    printf("|r/R : to search the rollno     |\n");
						    printf("|				    |\n");
						    printf("|n/N : to search a name         |\n");
						    printf("|				    |\n");
						    printf("|p/P : to search percentage     |\n");
						    printf("+-------------------------------+\n");
						    scanf(" %c",&op1);

						    switch(op1){
							    case 'r': 
							    case 'R':search_rollno(head) ;break;
							    case 'n': 
							    case 'N':search_name(head) ;break;
							    case 'p': 
							    case 'P':search_perc(head) ;break;}break;
							   

			case 'e':
			case 'E':exit(0);break; 

			case 't': 
			case 'T': 
				 printf("+-------------------------------+\n");
				 printf("| *****SORT   MENU*****         |\n");		
				 printf("|-------------------------------|\n");
				 printf("|			          |\n");
				 printf("|n/N : sort with name  	  |\n");
				 printf("|				  |\n");
				 printf("|p/P : sort with percentage     |\n");
				 printf("+-------------------------------+\n");
				 scanf(" %c",&op1);

				 switch(op1){
					 case 'n': 
					 case 'N': sort_list_name(head);break;
					 case 'p':
					 case 'P': sort_list_perc(head);break;}
						   break;

			case 'l':
			case 'L':delete_all(&head);break;

			case 'R': 
			case 'r': reverse_node(&head);break;
			default:printf("not an option \n");
		}
	}

}
