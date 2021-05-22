#include<iostream>

using namespace std;

int main(){
    int a = 10,b=10;
    int *ptr = &a;
    int *ptr1 = &b;

    // pointer increment

    cout<<"Address of a: "<<ptr<<endl;
    int *x0= ptr;
    ptr++;
    int *x1= ptr; 
    cout<<"New address of a: "<<ptr<<endl;
    cout<<"difference of ptr in bits:"<<4*(x1-x0)<<endl;

    // pointer decrement
    
    cout<<"Address of b: "<<ptr1<<endl;
    int *y0=ptr1;
    ptr1--;
    int *y1 =ptr1;
    cout<<"New address of b:"<<ptr1<<endl;
    cout<<"difference of ptr in bits: "<<4*(y0-y1);

    return 0;
}