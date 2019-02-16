#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node Node;

struct Node {
        char *data;
        Node *next;
};


Node* create_node(char *data, Node* next);
Node* create_head(char *data);
void dispose_node(Node *n);
void dispose_list(Node *n);

Node* tail(Node *head);

void append(Node *head, char *data);
void prepend(Node **head, char *data);
void add_index(Node **head, int index, char *data);

void remove_first(Node **head);
void remove_last(Node **head);
void remove_index(Node **head, int index);

void print_list(Node *head);
#endif
