#include<iostream>

using namespace std;

int main(){
    int i;
    char str[6]="Hello";

    for(i=0;str[i];i++){
        cout<<str+i<<endl;
    }

    return 0;
}