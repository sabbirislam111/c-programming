#include<stdio.h>
#include<string.h>
int main(){

    char ch[10]= "hello";
    char ch2[10]= "world";

    strncat(ch, ch2, 5);
    ch[10] = '\0';

    printf("%s", ch);





 return 0;
}
