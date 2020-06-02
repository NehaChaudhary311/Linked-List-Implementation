#pragma once
//Included cstdef as NULL wasn't defined and I needed it to initialize **head 
#include <cstddef>

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct node {
	int data; //later : void* data;
	struct node* next; //pointer to the next element of current node
}Node;
Node** head = NULL;

//Declarations of all the functions

//Creates a linked list
int create(Node** head);

//Clears the data from linked list
int clear(Node** head);

//Inserts the new_data in the begining of the linked list
int push_front(Node** head, int new_data);

//Deletes the new_data from the begining of the linked list
int pop_front(Node** head);

//Inserts the new_data at the end of the linked list
int push_back(Node** head, int new_data);

//Deletes the new_data from the end of the linked list
int pop_back(Node** head);

//Prints the linked list from front to end style
int traversal(Node** head);

//Reverse the linked list
int reverse(Node** head);


#endif LINKEDLIST_H_

