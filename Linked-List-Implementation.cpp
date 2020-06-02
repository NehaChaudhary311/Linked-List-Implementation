// Linked-List-Implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "LinkedList.h"

#include <iostream>
using namespace std;


int main()
{
    cout << "----------------------------"<<endl;
    cout << "---LINKED LIST OPERATIONS---"<<endl;
    cout << "----------------------------"<<endl;

    Node* create(Node** head, int new_data){
        Node* new_node = (Node*)malloc(sizeof(Node));
        
        //Checking whether malloc has allocated space or not
        //NOTE : The malloc() and calloc() functions return a pointer to the allocated memory that 
        //is suitably aligned for any kind of variable. On error, these functions return NULL.
        if (new_node == NULL)
            return -1;
        else {
            new_node->next = NULL;
            new_node->data = new_data;
            return new_node;
        }
            
    }
    /*int clear(Node** head) {

    }*/
    int push_front(Node** head, int new_data) {
        Node* new_node = create(** head, new_data);
        //If the list is empty
        if (*head == NULL) {
            cout << "List is empty" << endl;
            *head = new_node;
            return 0;
        }
        //If the list is not empty
        else {
            new_node->next = *head;
            *head = new_node;
            return 0;
        }
        int push_back(Node** head, int new_data) {
            Node* new_node = create(** head, new_data);
            //If the list is empty
            if (*head == NULL) {
                cout << "List is empty" << endl;
                *head = new_node;
                return 0;
            }
            
            else {
                Node* last = *head;
                while (last->next != NULL) {
                    last = last->next;
                }
                last->next = new_node;
                new_node->next = NULL;
                return 0;
            }
                
        }
        int pop_front(Node** head) {
            //If the list is empty
            if (*head == NULL) {
                cout << "List is empty... Can't delete anything" << endl;
                return -1;
            }
            else {
                Node* tmp = *head;
                *head = tmp->next;
                free(tmp);
                return 0;
            }
        }
        int pop_back(Node** head) {
            //If the list is empty
            if (*head == NULL) {
                cout << "List is empty... Can't delete anything" << endl;
                return -1;
            }
            else {
                Node* last = *head;
                Node* prev_to_last = NULL;
                while (last->next != NULL) {
                    prev_to_last = last;
                    last = last->next;
                }
                prev_to_last = NULL;
                free(last);
            }
        }
        void traversal(Node** head) {
            while (*head != NULL) {
                cout << node->data << "->";
                *head = (*head)->next;
            }
        }
        void reverse(Node** head) {
            Node* curr = *head;
            Node* prev = NULL;
            Node* next = NULL;
            while (current->next != NULL) {

                next = curr->next;
                curr->next = prev;

                //Move pointers one position ahead
                prev = curr;
                curr = next;
            }
            *head = prev;
        }

    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
