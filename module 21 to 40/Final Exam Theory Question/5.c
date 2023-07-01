#include<stdio.h>
#include<string.h>

int main(){

    char ch[101];
    gets(ch);
    int n = strlen(ch);
    int count[10] ={0};

    for(int i = 0; i < n; i++){
            int val = ch[i] - 48;
       if(val >= 0 && val <= 9){
        count[val]++;
       }
    }

    for(int i = 0; i < 9; i++){
            if(count[i] == 0){
                 printf("No");
                 return 0;
            }

    }
    printf("Yes");



    return 0;
}
