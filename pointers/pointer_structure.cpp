#include<iostream>

using namespace std;

struct employee{
        char name[4];
        int age;
        float weight;
    };

int main(){
    employee e={"abc",12,45.52};
    employee *ptr=&e;

    cout<<(*ptr).name<<" "<<(*ptr).age<<" "<<(*ptr).weight; //using pointer method

    cout<<ptr->name<<" "<<ptr->age<<" "<<ptr->weight;  // using ARROW method
    
    return 0;
}