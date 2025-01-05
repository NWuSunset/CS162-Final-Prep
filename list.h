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

};

#endif
