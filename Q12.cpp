#include<stdio.h> 
#include<stdlib.h> 
  

struct Node 
{ 
    int data; 
    struct Node* next; 
}; 
  

void sortedInsert(struct Node**, struct Node*); 
  

void insertionSort(struct Node **head_ref) 
{ 
    
    struct Node *sorted = NULL; 
  
    
    struct Node *current = *head_ref; 
    while (current != NULL) 
    { 
        
        struct Node *next = current->next; 
  
         
        sortedInsert(&sorted, current); 
  
        
        current = next; 
    } 
  
    
    *head_ref = sorted; 
} 
  

void sortedInsert(struct Node** head_ref, struct Node* new_node) 
{ 
    struct Node* current; 
    
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data) 
    { 
        new_node->next = *head_ref; 
        *head_ref = new_node; 
    } 
    else
    { 
        
        current = *head_ref; 
        while (current->next!=NULL && 
               current->next->data < new_node->data) 
        { 
            current = current->next; 
        } 
        new_node->next = current->next; 
        current->next = new_node; 
    } 
} 
  

void printList(struct Node *head) 
{ 
    struct Node *temp = head; 
    while(temp != NULL) 
    { 
        printf("%d  ", temp->data); 
        temp = temp->next; 
    } 
} 
  

void push(struct Node** head_ref, int new_data) 
{ 
    
    struct Node* new_node = new Node; 
  
    new_node->data  = new_data; 
  
    new_node->next = (*head_ref); 
  
    
    (*head_ref)    = new_node; 
} 
   
int main() 
{ 
    struct Node *a = NULL; 
    struct Node *b = NULL;
    
    push(&a, 1); 
    push(&a, 2); 
    push(&a, 3); 
    push(&a, 4); 
    push(&a, 5); 
    push(&a,1);
    push(&a,2);

    push(&b,1);
    push(&b,5);
    push(&b,7);
    push(&b,9);
    push(&b,11);
    push(&b,2);
    push(&b,4);
    push(&b,6);
   
    printList(a); 
    printf("\n");
    printList(b);
  
    insertionSort(&a);
    insertionSort(&b); 
    printf("\n");
    printList(a); 
    printf("\n");
    printList(b);
  
    return 0; 
}