#include<iostream>

using namespace std;

int top=-1;
#define size 4
int arr[size];

void display(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
}

void push(int value){
    if(top==size-1){
        cout<<" stack is full!!";
    }
    else{
        top++;
        arr[top]=value;
    }
} 

void pop(){
    if(top==-1){
        cout<<" stack is empty!!";
    }
    else
        top--;
} 

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    display();
    return 0;
}