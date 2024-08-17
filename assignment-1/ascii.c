#include<stdio.h>
int main(){
    

   int a=65;
    for(int i='A'; i<='Z'; i++){

        printf("%c= %d\n",i,a++);
    }
    return 0;
}