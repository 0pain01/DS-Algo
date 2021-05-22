#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
} *head, *mid ,*mid1,*last;

void reverse(){
    struct node *prev=NULL,*next;
    struct node *present=head;

while(present!=NULL){
    next=present->next;
    present->next = prev;
    prev=present;
    present=next;
 }   
 head=prev;
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
    
    struct node *temp1=head;
    while(temp1!=NULL){
        cout<<temp1->data<<" -> ";
        temp1=temp1->next;
    }
    cout<<"NULL";
    cout<<endl;
    reverse();
    struct node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
    return 0;
}