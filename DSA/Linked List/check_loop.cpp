#include<iostream>

using namespace std;

struct node{
    int data;
    struct node *next;
};

int chck_loop(struct node *head){
    struct node *slow=head,*fast=head;
    
    while(slow&&fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
           return 1;   
    }
return 0;

}

void display(struct node *head,int flag){
    struct node *slow=head,*fast=head,*temp=head;
int loop=0;
if(flag ==1){
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow){
            cout<<temp->data;
            loop=1;
            break;
        }
    }

    if(loop){
        slow=head;
        while(slow!=fast){
            fast =fast->next;
            slow=slow->next;
        }
        
    }
   cout<<" -> "<<temp->next->data<<endl;
   cout<<"head:"<<slow->data;

}

else{
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}

}

int main(){
    struct node *head,*a, *b, *c,*d,*end;

    head= (node*)malloc(sizeof(node));
    a = (node*)malloc(sizeof(node));
    b= (node*)malloc(sizeof(node));
    c= (node*)malloc(sizeof(node));
    d= (node*)malloc(sizeof(node));
    end = (node*)malloc(sizeof(node));

    head->data= 10;
    a->data=20;
    b->data=30;
    c->data=40;
    d->data=50;
    end->data=60;

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=end;    
    end->next=b;    // put end->next = NULL  for no loop validation of this program


    int flag=chck_loop(head);

    if (flag==1)
        cout<<"yes";
    else
        cout<<"no";

    cout<<endl;

    display(head,flag);
    

return 0;
}