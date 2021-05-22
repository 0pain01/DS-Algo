#include<iostream>

using namespace std;

void main(){
    int a=10;
    int *ptr = &a;
    int **ptr1=&ptr;
    cout<<"address of a: "<<&a<<endl;
    cout<<"address of a in ptr: "<<ptr<<endl;
    cout<<"value of a through ptr: "<<*ptr<<endl;
    cout<<"value of a through double pointer: "<<**ptr1<<endl;
    cout<<"address of ptr in ptr1: "<<ptr1<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;

}