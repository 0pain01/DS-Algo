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
return 0;
}