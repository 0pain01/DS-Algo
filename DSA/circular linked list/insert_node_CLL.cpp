#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*head,*mid,*last;

void display(){
    struct node *temp=head;

    if (head==NULL){
        cout<<"null !!";
    }
    else{

        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(temp!=head);
    }
}

void beg(int key){
    struct node *new_node,*temp=head;

    new_node=(node*)malloc(sizeof(node));

    while(temp->next!=head){
        temp=temp->next;
    }
    new_node->data=key;

    temp->next=new_node;
    new_node->next=head;
    head=new_node;
}

void end(int key){
    struct node *new_node,*temp=head;

    new_node=(node*)malloc(sizeof(node));

    while(temp->next!=head){
        temp=temp->next;
    }
    new_node->data=key;

    temp->next=new_node;
    new_node->next=head;
}

void btw(int key , int pos){
    struct node *new_node,*temp=head,*temp1=head->next;
    int c=1;
    new_node=(node*)malloc(sizeof(node));

    while(c+1!=pos){
        temp=temp->next;
        temp1=temp1->next;
        c++;
    }
    new_node->data=key;
    temp->next = new_node;
    new_node->next=temp1;
}

int main(){
    
    head = (node*)malloc(sizeof(node));
    mid = (node*)malloc(sizeof(node));
    last = (node*)malloc(sizeof(node));

    head->data = 10;
    mid->data = 20;
    last->data = 30;

    head->next=mid;
    mid->next=last;
    last->next=head; 

    display();
    beg(5);
    end(40);
    btw(25,4);
    cout<<endl;
    display();
return 0;
}