#include<iostream>

using namespace std;

#define size 10

int main(){
    FILE *fc = fopen("files1.txt","r");
    FILE *fp = fopen("files2.txt","w");
   // char str[size];

   if (fc&&fp){
       char letter =fgetc(fc);

       while(letter!=EOF){
           fputc(letter,fp);
           letter = fgetc(fc);
       }

       fclose(fp);
       fclose(fc);
   }

 /*   if(fc&&fp){

        while(fgets(str,size,fc)!=NULL){
            fputs(str,fp);
        }

        fclose(fc);
        fclose(fp);
    }
*/
    return 0;
}