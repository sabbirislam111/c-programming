#include<stdio.h>
#include<string.h>

unsigned int bainaryToInt(char ch[]){
    int len = strlen(ch);
    unsigned int ans = 0;
    for(int i = len-1, p2 = 1; i >= 0; i--, p2*= 2){

        int bit = ch[i] - '0';
        printf("%d -> %d bit -> %d\n", i, p2, bit);

        if(bit == 1){
            ans+=p2;

        }

    }
    printf("Ans %d", ans);
}

int main(){
    char str[100];
    gets(str);
    bainaryToInt(str);
}
