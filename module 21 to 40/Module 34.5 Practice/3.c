#include<stdio.h>
#include<string.h>
void find_firstIndex(char *str, char ch){

    if(str[0] == ch){
        printf("found");
    }
    else{
        printf("Not found");
    }

}


int main(){

char str[] = "hello";
char ch;
scanf("%c", &ch);

find_firstIndex(str, ch);

return 0;
}
