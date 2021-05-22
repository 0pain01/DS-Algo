#include<iostream>

using namespace std;

int fact(int num){
    if (num==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}

int main(){
    int num;
    cout<<"enter the number for factorial: ";
    cin>>num;

    int t=fact(num);
    cout<<"result: "<<t;
    return 0;

}