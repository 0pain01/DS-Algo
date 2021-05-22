#include<iostream>

using namespace std;

int top1=-1,top2=-1;
#define size 6
int arr[size];

void push1(int value){
    if(top1==size/2-1){
        cout<<"stack1 full"<<endl;
    }
    else{
        top1++;
        arr[top1]=value;
    }
}

void push2(int value){
    if(top2==size/2-1){
        cout<<"stack2 full"<<endl;
    }
    else{
        top2++;
        arr[(size/2)+top2]=value;
    }
}

void pop1(){
    if (top1==-1)
        cout<<"stack1 empty!!"<<endl;
    else
        top1--;
}

void pop2(){
    if (top2==-1)
        cout<<"stack2 empty!!"<<endl;
    else
        top2--;
}

void display1(){
    cout<<"stack1:";
    for(int i=0;i<=top1;i++){
        cout<<arr[i]<<" ";
    }
}

void display2(){
    cout<<"stack2:";
    for(int i=size/2;i<=(size/2)+top2;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    pop1();
    push1(10);
    pop2();
    push2(20);
    push1(30);
    push1(40);
    push1(50);
    push2(60);
    display1();
    cout<<endl;
    display2();

    return 0;
}