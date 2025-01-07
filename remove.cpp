#include "list.h"

//will remove the head node from the list
void list::removeHead(node* &head) {
  //Delete the head first?
  node* temp = head->next; //savee the next node is the lsit
  delete head; //delete the head node
  head = temp; //head now points to the next node in the list
}

node* list::buildCopy(node* head) {
  if (head == nullptr) {
    return nullptr;
  }
  
  node* first = new node();
  first->data = head->data;

  node* curr = head;
  
  while (curr->next != nullptr) {
    curr = curr->next;
  }

  node* last = new node();
  last->data = curr->data;

  first->next = last;
  
  return first;
  
}

//removes all nodes will a value of ten
void list::removeTen(node* &head) {
  if (head->data == 10) { //case: head is ten
    node* temp = head->next;
    delete head;
    head = temp;
  }

  node* curr = head;
    
  while (curr->next != nullptr) {
    if (curr->next->data == 10) {
      node* temp = curr->next;
      curr->next = curr->next->next;
      delete temp;
    } else {
      curr = curr->next; //only inciment if ten is not removed (in case there are multiple tens in a row)
    }
  }
}

void list::addNode(node* &head, int data) {
  if (head == nullptr) { //case: list is empty
    head = new node();
    head->data = data;
    return;
  }

  node* curr = head;

  while (curr->next != nullptr) {
    curr = curr->next; //incriment until list end is met
  }

  //when list end is met (add to end of list)
  curr->next = new node();
  curr->next->data = data;
}

//Addding a node via recursion, head will be the first node passed in 
void list::addNodeRecur(node* &curr, int data) {
  if (curr == nullptr) {
    curr = new node();
    curr->data = data;
    return;
  }
  
  //if end is not hit keep traversing loop
  addNodeRecur(curr->next, data); //one the end is hit the head==nullptr condition will be met.  
}

//remove will only remove the first occurance of data.
void list::removeNode(node* &head, int data) {
  if (head->data == data) {
    node* temp = head;
    head = head->next;
    delete temp;
    return;
  }

  node* curr = head;

  while (curr->next != nullptr && curr->next->data != data) {
    curr = curr->next;
  }

  if (curr->next == nullptr) {
    cout << "data not found" << endl;
    return;
  }

  //delete the node that has that data
  node* temp = curr->next;
  curr->next = curr->next->next;
  delete temp;
}

void list::removeNodeRecur(node* &curr, int data) {
  if (curr == nullptr) {
    cout << "data not found" << endl;
    return;
  }

  if (curr->data == data) {
    node* temp = curr;
    curr = curr->next;
    delete temp;
    return;
  }

  //if data point has not been hit
  removeNodeRecur(curr->next, data);
}
