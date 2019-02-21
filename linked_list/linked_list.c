#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linked_list.h"

Node* create_head(char *data){
	Node *new = malloc(sizeof(Node));
	new->data = malloc(sizeof(char)*(strlen(data)+1));
	new->next = NULL;

	if(!new || !new->data){
		puts("Failed to allocate memory."); exit(1);
	}
	if(!strcpy(new->data, data)){
		puts("Failed to copy data"); exit(1);
	}

	return new;
}

Node* create_node(char *data, Node* next){
	Node *new = malloc(sizeof(Node));
	new->data = malloc(sizeof(char)*(strlen(data)+1));
	new->next = next;

	if(!new || !new->data){
		puts("Failed to allocate memory."); exit(1);
	}
	if(!strcpy(new->data, data)){
		puts("Failed to copy data"); exit(1);
	}

	return new;
}

void dispose_node(Node *n){
	free(n->data);
	free(n);
}

void dispose_list(Node *n){
	while(n){
		Node *old = n;
		n = n->next;
		dispose_node(old);
	}
}
Node* tail(Node *head){
	Node *out =head;
	while(out->next != NULL)out=out->next;
	return out;
}

void append(Node *head, char *data){
	Node *last = tail(head);
	last -> next = create_head(data);
}

void prepend(Node **head, char *data){
	Node *new_head = create_node(data, *head);
	*head = new_head;
}

void add_index(Node **head,int index, char *data){
	if(index == 0){
		prepend(head,data); return;
	}

	Node *n = *head;
	--index; // how 2 write unreadable code TM
	for(int i = 0;i<index;++i){
		if(n->next){
			n=n->next;
		}else {
			puts("index out of range"); exit(1);
		}
	}
	
	Node *new;
	new = create_node(data, n->next);
	n->next = new;
}

void remove_last(Node **head){
	if((*head)->next == NULL){
		dispose_node(*head);
		*head=NULL;
		return;
	}

	Node *node = *head;
	while(node->next->next != NULL)node=node->next;

	dispose_node(node->next);
	node->next = NULL;
}

void remove_first(Node **head){
	if((*head)->next == NULL){
		dispose_node(*head);
	       	*head =NULL;
		return;
	}

	Node *new = (*head)->next;
	dispose_node(*head);
	*head = new;
}

void remove_index(Node **head, int index){
	if(index==0){
		remove_first(head); return;
	}
	
	Node *n = *head;
	--index;
	for(int i = 0;i<index;++i){
		if(n->next){
			n=n->next;
		}else {
			puts("index out of range"); exit(1);
		}
	}

	if(n->next) {
		Node *trash = n->next;
		n->next=n->next->next;
		dispose_node(trash);
	}else{
		puts("index out of range");
		exit(1);
	}
}


void print_list(Node *head){
	do {
		printf("%s\n",head->data);
		head = head->next;
	}while(head);
}
