
#include <stdio.h>
#include <stdlib.h>

struct student_t{

	char *name;
	struct student_t *head;
	struct student_t *next;
	struct student_t *prev;
	struct student_t *tail;

};

struct student_t *createNewStudent(char *name){

	struct student_t *output = malloc (sizeof(struct student_t));
	output->head = NULL;
	output->next = NULL;
	output->prev = NULL;
	output->tail = NULL;
	output->name = name;

}

int insertStudent(){

	

}

int deleteHead(struct student_t *in){

	struct student_t *newHead;
	newHead = in->head->next;
	free (in->head);
	newHead->prev = NULL;

	struct student_t *thisStudent = newHead;

	while (thisStudent != NULL){
		thisStudent->head = newHead;
		thisStudent = thisStudent->next;
	}

}

char *input1 = "foo";
char *input2 = "bar";
char *input3 = "quux";

struct student_t *list;

void printList(struct student_t *list;){
	struct student_t *thisStudent = list;
	while (thisStudent != NULL){
		printf("This student is called '%s'\n", thisStudent->name);
		thisStudent = thisStudent->next;
	}
}

int main(){

	list = createNewStudent(input1);
	list->head = list;
	list->next = createNewStudent(input2);
	list->next->head = list;
	list->next->next = createNewStudent(input3);
	list->next->next->head = list;

	printf("Original list:\n");
	printList(list);
	printf("\nRemoved head:\n");
	list = list->next;
	deleteHead(list);
	printList(list);


	return 0;

}











