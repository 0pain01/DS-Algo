#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*head, *mid ,*mid1,*last;

void Delete(){
    struct node *temp=head;
    temp=temp->next;
    free(head);
    head=temp;
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
    mid1 -> data = 40;
    last -> data = 30;

    // linking the nodes to each other
    head->next=mid;
    mid->next=mid1;
    mid1->next=last;
    last->next= NULL;

    Delete();
    Delete();
    struct node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}