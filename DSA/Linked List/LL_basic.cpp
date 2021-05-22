#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head, *mid ,*last;          // deaclared three nodes

    // allocating heap memory
    head = (node *)malloc(sizeof(node));
    mid = (node *)malloc(sizeof(node));
    last = (node *)malloc(sizeof(node));

    // entering data to the nodes
    head -> data= 10;
    mid -> data = 20;
    last -> data = 30;

    // linking the nodes to each other
    head->next=mid;
    mid->next=last;
    last->next= NULL;

    struct node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}