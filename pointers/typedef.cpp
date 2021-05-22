#include<iostream>

using namespace std;

typedef int (*FP) (int,int);

int sum(int a ,int b){
    return a+b;
}

int mod(int a,int b){
    return a%b;
}

int execute(int x, int y, FP fp){
    int result= (*fp) (x,y);
    return result;
}

int main(){
    cout<<"a+b: "<<execute(10,5,sum)<<endl;
    cout<<"a%b: "<<execute(10,5,mod);
    return 0;
}