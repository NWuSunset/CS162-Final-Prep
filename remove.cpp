#include "list.h"

//will remove the head node from the list
void list::removeHead(node* &head) {
  //Delete the head first?
  node* temp = head->next; //savee the next node is the lsit
  delete head; //delete the head node
  head = temp; //head now points to the next node in the list
}

node* list::buildCopy(node* head) {
  //only make a list that consitsts of first and last values of original list

  node* curr = head;
  node* prev = nullptr;
  
  //Loop through the list to find the end
  while (curr != nullptr) {
    prev = curr; //this is so we can save the psoition of the node right before the end (since the end is null)
    curr = curr->next; 
  }

  //Once the end is found prev will be the last node in the list.
  head->next = prev; //so this will only be a two part list

  return head; //return the head node
}