#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*head=NULL;

void display(){
    struct node *tmp=head;
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
}

void push(int value){
    struct node *new_node;
    new_node = (node*)malloc(sizeof(node));
    new_node->data=value;
    new_node->next=head;
    head=new_node;
    
}

void pop(){
    struct node *temp=head;
    head= head->next;
    free(temp);
}

int main(){
push(10);
push(20);
push(30);
push(40);
push(50);
pop();
pop();
display();
return 0;
}