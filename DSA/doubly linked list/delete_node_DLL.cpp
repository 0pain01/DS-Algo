#include<iostream>

using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL,*last;

void display(){
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void del(int key){
    struct node *temp=head;

if(head->data==key){
    temp=head->next;
    temp->prev=NULL;
    free(head);
    head=temp;
}
else{
    while(temp!=NULL){
    if(temp->data==key && temp->next==NULL){
        temp->prev->next=NULL;
        free(temp);
        break;
    }

    else if(temp->data==key){
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        break;
    }
    else
        temp=temp->next;
 }
}
}
    


int main(){
    struct node *node1,*node2,*node3, *last;
    
    head = (node*)malloc(sizeof(node));
    node1 = (node*)malloc(sizeof(node));
    node2 = (node*)malloc(sizeof(node));
    node3 = (node*)malloc(sizeof(node));
    last = (node*)malloc(sizeof(node));

    head->data=10;
    node1->data=20;
    node2->data=30;
    node3->data=40;
    last->data=50;

    head->prev=NULL;
    head->next=node1;
    node1->prev=head;
    node1->next=node2;
    node2->prev=node1;
    node2->next=node3;
    node3->prev=node2;
    node3->next=last;
    last->prev=node3;
    last->next=NULL;

    display();
    del(10);
    del(30);
    del(50);
    cout<<endl;
    display();
    return 0;
}