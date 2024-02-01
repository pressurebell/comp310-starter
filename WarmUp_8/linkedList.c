#include <stdio.h>

struct node 
{
    int data;
    struct node* next;
}
void push(node * head, int new)
{
    node * current = head;
    while (current != NULL)
    {
        current = current -> next;
    }
    current -> next = (node *) malloc(sizeOf(node));
    current -> next -> data = data;
    current -> next -> next = NULL;
}

int main()
{

}