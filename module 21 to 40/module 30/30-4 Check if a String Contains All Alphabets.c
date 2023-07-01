#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    gets(ch);
    int len = strlen(ch);
    int count[26] ={0};

    for(int i = 0; i < len; i++){
        int val = ch[i];
        count[val -'a'] =1;
    }
    for(char value = 'a'; value <= 'z'; value++){

        if(count[ value - 'a'] == 0){
            printf("No");
            return 0;
        }
    }
    printf("yes");


 return 0;
}
