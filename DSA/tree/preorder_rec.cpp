#include<iostream>

using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};

void Preorder(struct node *root){
    if(root){
        cout<<root->data<<" ";
        Preorder(root->left);
        Preorder(root->right);
    }
}

int main(){
    struct node *root,*a,*b,*c,*d,*e,*f;

    root = (node*)malloc(sizeof(node));
    a = (node*)malloc(sizeof(node));
    b = (node*)malloc(sizeof(node));
    c = (node*)malloc(sizeof(node));
    d = (node*)malloc(sizeof(node));
    e = (node*)malloc(sizeof(node));
    f = (node*)malloc(sizeof(node));

    root->data=1;
    a->data=2;
    b->data=3;
    c->data=4;
    d->data=5;
    e->data=6;
    f->data=7;

    root->left=a;
    root->right=b;
    a->left=c;
    a->right=d;
    b->left=e;
    b->right=f;
    c->left=NULL;
    c->right=NULL;
    d->left=NULL;
    d->right=NULL;
    e->left=NULL;
    e->right=NULL;
    f->left=NULL;
    f->right=NULL;

    Preorder(root);

return 0;
}