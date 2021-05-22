#include<iostream>

using namespace std;

int main(){
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int *ptr;
    ptr= arr;
    int *ptr1 = &arr[3];
    
    if(ptr!=NULL)
        cout<<"Base value of array: "<<*ptr<<endl;

    if (*ptr<*ptr1)
        cout<<"greater element is: "<<*ptr1;

    return 0;
}