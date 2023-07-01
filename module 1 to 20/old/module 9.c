#include<stdio.h>
#include<limits.h>
#include<ctype.h>
int main(){

/////// printing ascii value //////////////

 /*for(int i = 65; i <= 90; i++){
        printf("%d %c\n", i, i);
     }*/

/////// printing ascii value //////////////

    /*char ch;
    scanf("%c", &ch);

    if('A' <= ch && ch <= 'Z'){
        printf("Uppercase");

    }
    else if('a' <= ch && 'z' >= ch){
        printf("Lowercase");
    }
    else if('0' <= ch && '9' >= ch){
       printf("Number");
    }*/

    /*char ch;
    scanf("%c", &ch);

    if('A' <= ch && ch <= 'Z'){
        char lower = ch - 'A' + 'a';
        printf("lower case = %c", lower);
    }
    else if('a' <= ch && ch <= 'z'){
        char upper = ch - 'a' + 'A';
        printf("Upper case = %c", upper);
    }*/

    char ch;
    scanf("%c", &ch);

    if(isupper(ch)){
        printf("Lowercase = %c", tolower(ch));
    }


    return 0;
}
