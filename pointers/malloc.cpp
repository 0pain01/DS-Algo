#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
   int *ptr = (int*) malloc(5*sizeof(int));

    if (ptr!=NULL)
        cout<<"Memory Created!!"<<endl;

   *(ptr+0)=10;
   *(ptr+1)=20;
   *(ptr+2)=30;
   *(ptr+3)=40;
   *(ptr+4)=50;

    for(int i=0;i<5;i++){
        cout<<"values of position "<<i+1<<" : "<<*(ptr+i)<<endl;
    }
   return 0;

}