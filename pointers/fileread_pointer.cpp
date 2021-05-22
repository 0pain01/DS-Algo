#include<iostream>

using namespace std;
// #define size 10

int main(){
    FILE *fp = fopen("file.txt","r");

    //char str[size];

/*
    if (fp!=NULL){
        while(gets(str,10,fp)!=NULL){
            cout<<str;
        }
    }
*/

    if(fp!=NULL){
        char letter = fgetc(fp);   // fgetc used to read character wise

        while(letter!=EOF){
            cout<<letter;          // printing characterwise till getting the EOF
            letter=fgetc(fp);
        }
    }
    fclose(fp);
    return 0;
}