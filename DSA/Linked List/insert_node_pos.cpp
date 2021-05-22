#include<iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
} *head,*last;

void insert(int val,int n){
    struct node *newnode=(node*)malloc(sizeof(node));

    newnode->data=val;

    struct node *temp=head;
    int c=0;

    if(head->next==last){
        head->next=newnode;
        newnode->next=last;
    }
     
    else{

    while(c!=n-1){
        temp=temp->next;
        c++;
    }
    struct node* tmp=temp->next;
    temp->next=newnode;
    newnode->next=tmp;
    }
    
}

int main(){
    head=(node*)malloc(sizeof(node));
    last=(node*)malloc(sizeof(node));

    head->data=10;
    last->data=20;

    head->next=last;
    last->next=NULL;

    insert(40,0);
    insert(50,1);
    insert(60,2);
    insert(70,1);
    insert(80,2);

    struct node *tmp=head;

    while(tmp!=NULL){
        cout<<tmp->data<<" -> ";
        tmp=tmp->next;
    }
    cout<<"NULL";
    return 0;
}