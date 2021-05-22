#include<iostream>

using namespace std;

int main(){
    char const *str[5]={"Tamil","English","Hindi","Malyalam","Punjabi"};

    for(int i=0;i<5;i++){
        cout<<*(str+i)<<" ";
    }

    return 0;
}