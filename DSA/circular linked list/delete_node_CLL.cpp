#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
}*head=NULL;

void display(){
    struct node *temp=head;

    if (head==NULL){
        return;
    }
    else{
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        while(temp!=head);
    }
}

void del(int key){
    struct node *temp=head;
    struct node *temp1=head->next;

    if (head==NULL){
        return;
    }
    else if(head->data==key){
        while(temp1->next!=head){
            temp1=temp1->next;
        }
        temp=temp1->next;
        temp1->next=temp->next;
        head=temp->next;
        free(temp);
    }
    else{
        do{
            if(temp1->data==key){
                temp->next=temp1->next;
                free(temp1);
                break;
            }
            else{
                temp=temp->next;
                temp1=temp1->next;
            }
        }
        while(temp1!=head);
    }
}

int main(){
    struct node *node1, *node2, *node3,*last;
    head = (node*)malloc(sizeof(node));
    node1= (node*)malloc(sizeof(node));
    node2= (node*)malloc(sizeof(node));
    node3= (node*)malloc(sizeof(node));
    last = (node*)malloc(sizeof(node));

    head->data = 10;
    node1->data = 20;
    node2->data = 30;
    node3->data = 40;
    last->data = 50;

    head->next=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=last;
    last->next=head; 

    display();
    del(10);
    del(40);
    del(50);
    cout<<endl;
    display();
return 0;
}