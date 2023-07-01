
#include<stdio.h>
#include<string.h>
int main(){
    char ch[] = "hello";

    char* pos = strchr(ch, 'e');

    printf("%s", pos);



return 0;
}
