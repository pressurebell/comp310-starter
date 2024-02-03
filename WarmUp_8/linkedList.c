#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

void push(node ** head, int new)
{
    struct node * current =  head;
    while (current->next != NULL) {
        current = current->next;
    }
    //gcurrent->next = (node *) malloc(sizeof(node));
    current->next->data = new;
    current->next->next = NULL;
}
void print_list(node * head)
{
    node * current = head;
    while (current != NULL)
    {
        printf("\n %d", current->data);
        current = current->next;
    }
}
int main()
{
    node * temp_node = NULL;
    push(temp_node,5);
    print_list(temp_node);

}