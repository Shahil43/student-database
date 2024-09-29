#include "header.h"
void stud_save_exit(sll *ptr){

	FILE *fp;
	fp=fopen("data.txt","w");
	if(ptr==0){
		printf("no data to save \n");
		return;
	}
	while(ptr){
		fprintf(fp,"%d %s %f ",ptr->rollno,ptr->name,ptr->perc);
		ptr=ptr->next;
	}
	printf("data save successfully \n");
	fclose(fp);
	return;

}

