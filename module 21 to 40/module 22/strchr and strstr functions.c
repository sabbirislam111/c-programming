#include<stdio.h>
#include<string.h>

int main(){
    char ch[] = "Hello";

    char * pos = strchr(ch, 'e');
    printf("%d", pos - ch);

}
