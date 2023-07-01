#include<stdio.h>
int main(){

char ch[10] = "Sabbir";

char ch2[10];




    for(int i = 0; i < 10; i++){

        ch2[i] = ch[i];
    }
    ch2[10] = '\0';

    printf("%s", ch2);









 return 0;
}
