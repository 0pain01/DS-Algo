#include<iostream>

using namespace std;

struct node {
    int data;
    struct node *next;
}*head;

void n_end(struct node *head,int n){
    int c=0;
    struct node *temp = head;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    temp=head;
    int t=1;
    while(t!=c-n+1){
        temp=temp->next;
        t++;
    }
    cout<<temp->data;
}

void display(){
    struct node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";

}

int main(){
    struct node *a, *b, *c,*end;

    head= (node*)malloc(sizeof(node));
    a = (node*)malloc(sizeof(node));
    b= (node*)malloc(sizeof(node));
    c= (node*)malloc(sizeof(node));
    end = (node*)malloc(sizeof(node));

    head->data= 10;
    a->data=20;
    b->data=30;
    c->data=40;
    end->data=50;

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=end;
    end->next=NULL;

    display();
    cout<<endl;

    int n;
    cout<<"enter the nth node from end:";
    cin>>n;

    n_end(head,n);
}