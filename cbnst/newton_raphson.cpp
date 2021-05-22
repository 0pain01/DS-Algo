#include<iostream>
#include<cmath>

using namespace std;

float f(float n){
    float x=n;
    return pow(x,3)-4*x-9;
}

float f1(float n){
    float x=n;
    return 3*pow(x,2)-4;
}

float nrs(float a){
    float c = a-(f(a)/f1(a));
    return c;
}

int main(){
    float c;
    cout<<"enter number: ";
    cin>>c;

        float itr,tol=0,temp=0;
        cout<<"enter iterations and tolerence: ";
        cin>>itr>>tol;
        for(int i=0;i<itr;i++){
            float d=nrs(c);
           //float x=temp*(pow(10,tol));
           //float y=d*(pow(10,tol));
            if(fabs(c-d)<=tol){
                cout<<"result: "<<c<<endl;
                exit(0);
            }
            //temp=c;
            c=d;
            cout<<"result: "<<c<<endl;
        }
    
    return 0;
}