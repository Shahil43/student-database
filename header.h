#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student {
	int rollno;
	char name[20];
	float perc;
	struct student *next;
}sll;
void stud_add(sll **);
void stud_del(sll **);
void stud_show(sll *);
void stud_save_exit(sll *);
void stud_save_without_exit(sll *);

void stud_del_rollno(sll **);			
void stud_del_name(sll **);
			
void sort_list_name(sll *);
void sort_list_perc(sll *);
void delete_all(sll **);
void search_rollno(sll *);
void search_name(sll *);
void search_perc(sll *);

void reverse_node(sll **;

