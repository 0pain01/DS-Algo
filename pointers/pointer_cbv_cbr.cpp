#include<iostream>

using namespace std;

void set(int a){        // call by value
    a = 0;
    cout<<"Value of a (set): "<<a<<endl;
}

void set1(int *b){     // call by reference
    *b=1;
    cout<<"Value of b(set):"<<*b<<endl;
}

int main(){
    int a =10, b=12;
    set(a);
    set1(&b);
    cout<<"Value of a (after): "<<a<<endl;
    cout<<"Value of b (after): "<<b;

    return 0;
}