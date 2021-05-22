#include<iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
} *head,*last;

void insert(int val){
    struct node *newnode=(node*)malloc(sizeof(node));

    newnode->data=val;
    if (head->next==last){
        newnode->next=last;
        head->next=newnode;
    }
    else{
        struct node *temp=head;
        while(temp->next!=last){
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=last;
    }
}

int main(){
    head=(node*)malloc(sizeof(node));
    last=(node*)malloc(sizeof(node));

    head->data=10;
    last->data=20;

    head->next=last;
    last->next=NULL;

    insert(40);
    insert(890);
    insert(60);

    struct node *tmp=head;

    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    return 0;
}