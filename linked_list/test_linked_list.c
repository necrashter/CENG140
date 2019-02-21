#include <stdio.h>
#include "linked_list.h"

int main(){
	puts("Linked List Test\n");

	Node *a = create_head("\"Goodbye cruel world.\"");

	append(a,"Infinite death embraces you.");
	prepend(&a,"Willkommen!");
	add_index(&a,1, "To be or not to be.");

	print_list (a);
	
	puts("\nARE WE HAVING FUN YET?!\n"); //lol
	
	remove_index(&a,2);
	remove_first(&a);
	remove_last(&a);

	append(a, "Können sie mir sagen ob ich Unicode Characters nutzen kann?");

	print_list(a);
	
	return 0;
}
