//Jonathan Castle
//implementation of recursive
//linked list manipulator

#include "list.h"

//constructore
list::list(){
  head = NULL;
}

//build wrapper
void list::b(int size){
  build(head, size);
}

//build function
void list::build(node *& head, int size){
  //create temporary variable for holding new nodes
  node * temp;

  //populate list with number of nodes equal to 'size'
  cout<<endl<<"adding..."<<endl;
  for(int i = 0;i<size;i++){
    //create node and link
    temp = new node;
    temp->next = head;
    head = temp;

    //set data equal to the index plus 5 for simplicity
    temp->data = i+5;
    cout<<temp->data<<endl;

  }
  
}

//search wrapper
bool list::s(int to_find){
  return search(head, to_find);
}

//search function checks each node for 'to_find'
bool list::search(node * head, int to_find){
  
  //if head is empty no need to search
  if(!head)
    return false;
 
  if(head->data==to_find)
    return true;

  return search(head->next, to_find);
}

//kill function wrapper
void list::k(int to_kill){
/*  if(!head)
    return;
  
  
  
  if(!head->next){
    if(head->data==to_kill){
      delete head;
      head = NULL;
    }
    return;
  }
  kill(head, head,  to_kill);*/
}

//kill function seeks 'to_kill', destroys it
//if present, and properly re-links
void list::kill(node * head, node * prev, int to_kill){
 /* if(!head->next)
    return;
  if(head->data == to_kill){
    prev->next=head->next;
    delete head;
    head=NULL;
  } 
  kill(head->next, head, to_kill);

 */

}

//display function wrapper
void list::d(){
  cout<<endl<<"list contents:"<<endl;
  display(head);
  cout<<endl;
}

//display function steps through the list and 
//displays the 'data' from each node
void list::display(node *head){
  if(!head)
    return;
  display(head->next);

  cout<<head->data<<'\t';
}

//deconstructor deletes the whole list
list::~list(){
  //TODO
}
