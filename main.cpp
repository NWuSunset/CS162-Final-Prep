#include "list.h"
#include <iostream>

using namespace std;

int main() {
  list* linkedList = new list();
  node* head = nullptr;
  linkedList->build(head); //creates a linked list by passing head in by reference
  linkedList->print(head);
  
  linkedList->removeHead(head); //removes a node from the linked list
  linkedList->print(head); //now list with head removed

  node* headCopy = linkedList->buildCopy(head);
  linkedList->print(headCopy);
  
  return 0;
}


