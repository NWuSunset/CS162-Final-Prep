#include "list.h"

using namespace std;

list::list() = default;

void list::build(node* &head) {
  srand((unsigned)time(0)); //Random number
  node* curr = new node(); //initial value (head)
   curr->data = (rand()%20 + 1); //values between 1 and 20
  head = curr;
  node* prev = curr; //make a previous so we can incriment in the for l0op
  int additionValues = (rand()&5); //0 to 5 additional values
    for ( int i = 0; i < 10 + additionValues; i++) { //creates 10 - 15 random values in the list
      curr = new node();
      prev->next = curr; //Previous next is current (well obviously)
      curr->data = (rand()%20 + 1); //set a value for this node
      prev = curr; //Now incriment down the list (prev is now the current node)
    }
  curr->next = nullptr;
}

void list::print(node* head) {
  while (head != nullptr) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}
