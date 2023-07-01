#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    gets(str);

    int len = strlen(str);

    int count = 0;
    int half = len / 2;

    int count2 = len;



    for(int i = 0; i < len; i++){
        if(str[i] == 'a'){
            count++;
        }

    }
    if(count > half && count < len){
        printf("%d", len);
        return 0;
    }
    if(count > half){
        printf("%d\n", count);
    }

    if(half >= count){
        count *= 2;
        count -= 1;
        printf("%d\n", count);
    }



    return 0;
}
