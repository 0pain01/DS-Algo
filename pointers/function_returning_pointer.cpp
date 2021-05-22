#include<iostream>

using namespace std;

int i = 100;

int* get(){
    cout<<"adress of i: "<<&i<<endl;
    return &i;
}

int main(){
    int *ptr = get();
    cout<<"address of i using ptr : "<<ptr<<endl;
    cout<<"value of i using ptr : "<<*ptr<<endl;
    cout<<"address of ptr : "<<&ptr;

    return 0;
}
