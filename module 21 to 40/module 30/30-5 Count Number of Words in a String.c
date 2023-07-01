#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char ch[100];
    gets(ch);
    int len = strlen(ch);
    ch[len -1] = '\0';

    bool word = false;
    int ans = 1;

    for(int i = 0; i < len; i++){
        char val = ch[i];
        if(val != ' '){
           word = true;

        }
        if(val == ' '){
            if(word == true){
                ans++;
                word = false;
            }
        }
    }
    printf("%d", ans);




 return 0;
}

