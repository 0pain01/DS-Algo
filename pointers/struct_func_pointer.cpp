#include<iostream>

using namespace std;

struct employee{
    char name[5];
    int age;
    float weight;
};

void dis(struct employee *ptr){
    cout<<"name: "<<ptr->name<<endl;
    cout<<"age: "<<ptr->age<<endl;
    cout<<"weight: "<<ptr->weight<<endl;

    ptr->age=45;
}

int main(){
    employee e={"abcd",23,67.45};
    employee *ptr= &e;
    dis(ptr);

    cout<<"new age: "<<ptr->age;
    return 0;
}
