#include<iostream>

using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*head=NULL, *last;

void display(){
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void beg(int key){
    struct node *new_node,*temp=head;

    new_node = (node*)malloc(sizeof(node));
    new_node->data=key;
    temp->prev=new_node;
    new_node->next=temp;
    new_node->prev=NULL;
    head=new_node;
}

void end(int key){
    struct node *new_node,*temp=head;
     new_node=(node*)malloc(sizeof(node));
     new_node->data=key;
     last->next=new_node;
     new_node->prev=last;
     new_node->next=NULL;
     last =new_node;
}

void btw(int key,int pos){
    struct node *new_node,*temp=head,*temp1;
    new_node = (node*)malloc(sizeof(node));
    new_node->data=key;
    int c=1;
    while(c+1!=pos){
        temp=temp->next;
        c++;
    }
    temp1=temp->next;
    temp->next=new_node;
    new_node->prev=temp;
    new_node->next=temp1;
}

int main(){
    struct node *mid;
    
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
    beg(5);
    end(40);
    btw(25,4);
    cout<<endl;
    display();
    return 0;
}