// A simple C program to introduce
// a linked list
#include <stdio.h>
#include <stdlib.h>
  
struct Node {
    int data;
    struct Node* next;
};
  

void    ft_put_list(struct Node *n)
{
    while (n != NULL)
    {
        printf("n->data: %d     |     next: %p\n", n->data, n->next);
        n = n->next;
    }
}

void    ft_push(struct Node **head_ref, int data)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = data;
    new->next = (*head_ref);
    (*head_ref) = new; 
}


void    ft_push_end(struct Node **head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  
    struct Node *last = *head_ref;  /* used in step 5*/
   
    /* 2. put in the data  */
    new_node->data  = new_data;
  
    /* 3. This new node is going to be the last node, so make next 
          of it as NULL*/
    new_node->next = NULL;
  
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }  
       
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
   
    /* 6. Change the next of last node */
    last->next = new_node;
    return;    
}
// Program to create a simple linked
// list with 3 nodes
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
  
    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
  
    /* Three blocks have been allocated dynamically. 
     We have pointers to these three blocks as head,
     second and third     
       head           second           third
        |                |               |
        |                |               |
    +---+-----+     +----+----+     +----+----+
    | #  | #  |     | #  | #  |     |  # |  # |
    +---+-----+     +----+----+     +----+----+
     
   # represents any random value.
   Data is random because we haven’t assigned 
   anything yet  */
  
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with
    // the second node
  
    /* data has been assigned to the data part of the first
     block (block pointed by the head). And next
     pointer of first block points to second.  
     So they both are linked.
  
       head          second         third
        |              |              |
        |              |              |
    +---+---+     +----+----+     +-----+----+
    | 1  | o----->| #  | #  |     |  #  | #  |
    +---+---+     +----+----+     +-----+----+    
  */
  
    // assign data to second node
    second->data = 2;
  
    // Link second node with the third node
    second->next = third;
  
    /* data has been assigned to the data part of the second
     block (block pointed by second). And next
     pointer of the second block points to the third 
     block. So all three blocks are linked.
    
       head         second         third
        |             |             |
        |             |             |
    +---+---+     +---+---+     +----+----+
    | 1  | o----->| 2 | o-----> |  # |  # |
    +---+---+     +---+---+     +----+----+      */
  
    third->data = 3; // assign data to third node
    third->next = NULL;
  
    /* data has been assigned to data part of third
    block (block pointed by third). And next pointer
    of the third block is made NULL to indicate
    that the linked list is terminated here.
  
     We have the linked list ready.  
  
           head    
             |
             | 
        +---+---+     +---+---+       +----+------+
        | 1  | o----->|  2  | o-----> |  3 | NULL |
        +---+---+     +---+---+       +----+------+       
     
      
    Note that only head is sufficient to represent 
    the whole list.  We can traverse the complete 
    list by following next pointers.    */
    printf("head->next: %d      |    next: %p\n", head->data, head->next);
    printf("second->next: %d    |    next: %p\n", second->data, second->next);
    printf("head->next: %d      |    next: %p\n", third->data, third->next);
    printf("\n====================================\n\n");
    ft_push_end(&head, 8283);
    ft_push(&head, 89);
    ft_put_list(head);
    return 0;
}