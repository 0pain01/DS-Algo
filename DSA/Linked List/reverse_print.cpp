#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
} *head, *mid ,*mid1,*last;

void reverse_print(struct node *ptr){
   if(ptr){
       struct node *temp=ptr->next;
    reverse_print(temp);
    cout<<ptr->data<<" ";
    }
}


int main(){        
    // allocating heap memory
    head = (node *)malloc(sizeof(node));
    mid = (node *)malloc(sizeof(node));
    mid1 = (node *)malloc(sizeof(node));
    last = (node *)malloc(sizeof(node));

    // entering data to the nodes
    head -> data= 10;
    mid -> data = 20;
    mid1 -> data = 30;
    last -> data = 40;

    // linking the nodes to each other
    head->next=mid;
    mid->next=mid1;
    mid1->next=last;
    last->next= NULL;
    
    reverse_print(head);

    return 0;
}