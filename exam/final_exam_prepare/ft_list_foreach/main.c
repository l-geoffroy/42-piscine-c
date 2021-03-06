#include "ft_list.h"
#include <stdlib.h>

t_list *head; // head which will tell the address of the list

t_list *ft_create(int *item) // create a new node in linklist
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	new->data = item;
	new->next = NULL;
	return (new);
}

void push(int *item) // push an item in the list
{
	t_list *new;
	if (!(new = ft_create(item)))
		return ;
	new->next = head;
	head = new;
}

void ft_square(void *a) // the function which will return the square
{
	*(int*)a = ((*(int *)a) *(*(int *)a));
}

#include <stdio.h>
int main (void) // main driver
{
	int arr[3] = {28, 78, 10}; 
	push(&arr[2]);
	push(&arr[1]);
	push(&arr[0]);
	void (*f)(void *) = &ft_square; // function pointer which will be applied to every element in list
	ft_list_foreach(head, f);
	while (head)
	{
		printf(" %d ", *(int *)(head->data)); // print each element
		head = head->next;
	}
	printf("\n");
	return (0);
}