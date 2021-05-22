#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

void reverse(string &x){
    char temp;
    int i,j,l,f,t;
    for(i=0;x[i];i++){
        if(x[i]!=' '){
            f=i;
            while(x[i+1]!=' '){
                i++;
                if(x[i+1]==' ' || x[i+1]=='\0')
                    break;
            }
            l=i;
            t=l;
            for(j=f;j<=f+(l-f)/2;j++){
                temp=x[j];
                x[j]=x[t];
                x[t]=temp;
                t--;
            }
        }
    }
}

int main(){
    string x;
    cout<<"enter String:";
    getline(cin,x);
    reverse(x);
    cout<<x;
    return 0;
}