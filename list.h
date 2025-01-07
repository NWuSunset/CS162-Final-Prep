#ifndef LIST_H
#define LIST_H

#include <iostream>


using namespace std;

struct node {
  int data;
  node* next;
};

class list {
public:
  list();
    
  void build(node* &head);
  void print(node* head);

  void removeHead(node* &head);
  node* buildCopy(node* head);
  void removeTen(node* &head);

  void addNode(node* &head, int data);
  void addNodeRecur(node* &curr, int data);

  void removeNode(node* &head, int data);
  void removeNodeRecur(node* &curr, int data);
};

#endif
