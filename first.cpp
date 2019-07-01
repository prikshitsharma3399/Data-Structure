#include<iostream>
using namespace std;
struct node 
{ 
  int data; 
  node *next;
};
void push(struct node **headref,int newdata)  
{ 
  struct node *newnode = new node();  
  newnode->data=newdata;  
  newnode->next=(*headref);
  (*headref)=newnode;
  return;
}
void printlist(struct node *n)
{ 
  while(n!=NULL)
  { 
      cout<<n->data<<" ";
      n=n->next;
  }
}
int main()
{ 
  struct node *head = NULL; 
  push(&head,1);  
  push(&head,2);  
  push(&head,3);  
  push(&head,4);
  printlist(head);
  return 0;
}
