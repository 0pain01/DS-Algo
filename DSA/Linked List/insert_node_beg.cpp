#include<iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
}*head=NULL;

void insert(int val){
    struct node *newnode= (node *)malloc(sizeof(node));

    newnode->data = val;
    newnode->next=head;

    head=newnode;
}

int main(){
    insert(20);
    insert(30);
    insert(40);

    struct node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
return 0;
}