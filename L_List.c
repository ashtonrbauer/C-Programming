#include<stdlib.h>
#include<stdio.h>

typedef struct Node{
	void * data;
	struct Node * next;
	struct Node * prev;
} Node;

Node* head = NULL;

Node* newNode(void* d){
	Node* nd_a = (Node*)malloc(sizeof(Node));
	nd_a -> data = d;
	nd_a -> prev = NULL;
	nd_a -> next = NULL;
	return nd_a;
}


void add(void*d){
	Node* nd_a = newNode(d);
	Node* temp = head;
	if(head == NULL)
	{
		head = nd_a;
		return;
	}
	else
	{
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = nd_a;
		nd_a->prev = temp;
	}
}

void Print(){
	Node* temp = head;
	printf("Your list: ");
	while(temp != NULL){
		printf("%s ", temp->data);
		temp = temp -> next;
	}
	printf("\n");
}

int main(){
	add("hello");
	Print();
	add("c");
	add("23");
	add("This is a Linked List");
	Print();
}


