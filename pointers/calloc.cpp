#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int *ptr = (int*)calloc(4,sizeof(int));

    if(ptr!=NULL){
        cout<<"Memory allocated!!"<<endl;
    }

    *(ptr+0)=10;
    *(ptr+1)=20;
    *(ptr+2)=30;
    *(ptr+3)=40;

    for(int i=0;i<4;i++){
        cout<<"Values of "<<i+1<<" : "<<*(ptr+i)<<endl;
    }

    return 0;
}