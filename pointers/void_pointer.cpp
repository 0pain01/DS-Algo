#include<iostream>

using namespace std;

int main(){
    int n = 10;
    char ch = 'a';

    void *ptr;

    ptr=&n;
    cout<<"Value 1: "<<*(int*)ptr<<endl;  //type casting pointer to int

    ptr=&ch;
    cout<<"Value 2: "<<*(char*)ptr;    // type casting pointer to char

return 0;
}