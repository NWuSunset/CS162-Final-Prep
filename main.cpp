#include "list.h"
#include <iostream>

using namespace std;

int main() {
  list* linkedList = new list();
  node* head = nullptr;
  linkedList->build(head); //creates a linked list by passing head in by reference
  linkedList->print(head);
  
  remove(head); //removes a node from the linked list
  
  return 0;
}


