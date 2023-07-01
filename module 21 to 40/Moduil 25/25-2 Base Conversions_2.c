#include<stdio.h>
#include<string.h>
int rev(char str[], int len){
    for(int i=len-1;i>=0;i--)
    {
            printf("%c",str[i]);

    }


}

void toBainary(unsigned int val, char ch[]){
     int idx = 0;
    while(val > 0){
        int digit = val%2;
            val = val/2;
            ch[idx] = '0'+ digit;
            idx++;

    }
    ch[idx] = '\0';
    int len = strlen(ch);
    rev(ch, len);



}


int main(){
    char str[100];
    unsigned int v = 23;
    toBainary(v, str);



}

