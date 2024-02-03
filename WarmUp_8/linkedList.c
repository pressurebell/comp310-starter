#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node* next;
} node;
void push(node ** head, int new)
{
    node * current = * head;
    while (current != NULL)
    {
        current = current -> next;
    }
    //current -> next = (node *) malloc(sizeOf(node));
    current -> next -> data = new;
    current -> next -> next = NULL;
}

int delete(node ** head, int key)
{
    node ** current = head;
    node * temp_node = NULL;
    int index = -1;
    int i = 0;

    while (current != NULL && current->data != key) {
        current = current->next;
        i++;
    }
    if (current->data == key)
    {
        temp_node = current->next;
        current->next = temp_node->next;
        free(temp_node);
        index = i;
    }
    return index;
}
void print_list(node ** head) {
    node ** current = head;
    
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    
}

int main()
{
    node * temp_node = NULL;
    push(&temp_node, 5);
    push(&temp_node, 3);
    push(&temp_node, 4);
    push(&temp_node, 7);
    push(&temp_node, 8);
    print_list(&temp_node);
    printf("\n 7 deleted at index: %d", delete(&temp_node, 7));
}