#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linked_list.h"

#define filename "todo.txt"
#define DEFAULT_SIZE 16
#define forever for(;;)

char *inputString(FILE* fp, size_t size){
//The size is extended by the input with the value of the provisional
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(char)*size);//size is start size
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(char)*(size*=2));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(char)*len);
}

Node* loadList(){
	FILE *f = fopen(filename,"r");
	if(!f){
		puts("Cannot open file");
		return NULL;
	}
	Node *n = NULL;  // iterating node
	Node *head = NULL; // head node
	char *buffer;

	forever {
		long pos = ftell(f);
		printf("pos: %d\n",pos);
		if(fgetc(f)==EOF)break;
		fseek(f, pos, SEEK_SET);
		
		buffer = inputString(f,DEFAULT_SIZE);
		if(n){
			n->next = create_head(buffer);
			n=n->next;
		} else head = n = create_head(buffer);
	}

	return head;
}


void saveList(Node *n){
	if(!n){
		puts("Nothing to save");
		return;
	}
	FILE *f = fopen(filename,"w+");
	if(!f){
		puts("Cannot open file");
		return;
	}

	do fprintf(f,"%s\n",n->data); while((n=n->next));

	if(0!=fclose(f))puts("Error while closing file");
}

void print_help(){
	puts("===================");
	puts("Available commands:");
	puts("append [text]");
	puts("prepend [text]");
	puts("list");
	puts("pop");
	puts("remove last/first");
	puts("remove [index]");
	puts("save");
	puts("load");
	puts("===================");
}

int main(void){
    Node *todo = NULL;
    char *input;
    todo = loadList();
    if(todo) puts("Autoloaded previous list");
    print_help();
    forever {
	    printf(">>> ");
	    input = inputString(stdin, DEFAULT_SIZE);

	    if(0==strncmp(input,"append",sizeof(char)*6)){
		    if(!todo){
			    todo = create_head(input+7);
		    }else{
			    append(todo,input+7);
		    }
	    }else if(0==strncmp(input,"list",sizeof(char)*4)){
		    if(todo)print_list(todo); else puts("No items to list");
	    } else if(0==strncmp(input,"pop",sizeof(char)*3) || 0==strncmp(input,"remove last",sizeof(char)*11)){
		    if(todo)remove_last(&todo); else puts("No items to pop");
	    } else if(0==strncmp(input,"prepend",sizeof(char)*7)){
		    if(!todo){
			    todo = create_head(input+8);
		    }else{
			    prepend(&todo,input+8);
		    }
	    } else if(0==strncmp(input,"remove first",sizeof(char)*12)){
		    if(todo)remove_first(&todo); else puts("No items to remove");
	    } else if(0==strncmp(input,"remove",sizeof(char)*6)){
		    if(todo) remove_index(&todo, atoi(input+7)); else puts("Nothing to remove");
	    } else if(0==strncmp(input,"save",sizeof(char)*4)){
		    saveList(todo);
	    } else if(0==strncmp(input,"load",sizeof(char)*4)){
		    dispose_list(todo);
		    todo=loadList();
	    } else
		if(0==strncmp(input,"exit",sizeof(char)*4)) break;
	    else puts("Unknown Command.");
    }
    
    puts("Autosaving...");
    saveList(todo);
    puts("Exiting...");
    
    dispose_list(todo);
    free(input);

    return 0;
}
