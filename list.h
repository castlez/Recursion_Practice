#include <iostream>

using namespace std;

struct node{
  int data;
  node*next;
};

class list{
  public:
    list();
    ~list();
    void build(node*&head, int size);
    void b(int size);
    bool search(node * head, int to_find);
    bool s(int to_find);
    void kill(node*head,node*prev, int to_kill);
    void k(int to_kill);
    void display(node* head);
    void d();
  private:
    node*head;

};
