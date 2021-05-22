#include<iostream>

using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL;

void display(){
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    struct node *mid, *last;
    
    head = (node*)malloc(sizeof(node));
    mid = (node*)malloc(sizeof(node));
    last = (node*)malloc(sizeof(node));

    head->data=10;
    mid->data=20;
    last->data=30;

    head->prev=NULL;
    head->next=mid;
    mid->prev=head;
    mid->next=last;
    last->prev=mid;
    last->next=NULL;

    display();

    return 0;
}