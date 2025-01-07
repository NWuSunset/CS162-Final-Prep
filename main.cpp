#include "list.h"
#include <iostream>

using namespace std;

int main() {
  list* linkedList = new list();
  node* head = nullptr;
  linkedList->build(head); //creates a linked list by passing head in by reference
  linkedList->print(head);
  
  linkedList->removeHead(head); //removes a node from the linked list
  cout << "Removing head node: ";
  linkedList->print(head); //now list with head removed

  node* headCopy = linkedList->buildCopy(head);
  cout << "Copy with only first and last: ";
  linkedList->print(headCopy);

  cout << "removing Ten: ";
  linkedList->removeTen(head);
  linkedList->print(head);

  linkedList->addNode(head, 10);
  linkedList->print(head);
  linkedList->addNodeRecur(head, 10);
  linkedList->print(head);

  linkedList->removeNode(head, 10);
  linkedList->print(head);
  linkedList->removeNodeRecur(head, 10);
  linkedList->print(head);
  
  return 0;
}


