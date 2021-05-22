#include<iostream>

using namespace std;

int sum(int x, int y){
    return x+y;
}

int main(){
    int (*s) (int,int);
    s=sum;

    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;

    cout<<"sum: "<<(*s)(a,b);

return 0;
}