//Jonathan Castle
//test environment for
//recursive linked list manipulation
#include "list.h"

int main(){
  //create needed variables
  list mlist;
  int hold;

  //populate list and display
  mlist.b(5);
  mlist.d();
  
  //prompt for search function
  cout<<"what to look for? ";
  cin>>hold;
  cin.ignore(100, '\n');
  bool found = mlist.s(hold);
  if(found)
    cout<<endl<<"found it!"<<endl;
  else
    cout<<endl<<"no luck!"<<endl;
  
//not working  
//  cout<<"what to kill? ";
//  cin>>hold;
//  cin.ignore(100, '\n');
//  mlist.k(hold);
//  mlist.d();
  

  return 0;
}
