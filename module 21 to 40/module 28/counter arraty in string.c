#include<stdio.h>
int main(){
    char ch[100];
    gets(ch);

    int count[26] = {0};
    for(int i = 0; i < strlen(ch); i++){
        char valu = ch[i];
        count[valu-'a']++;
    }

    for(int valu = 'a'; valu < 'z'; valu++){
//            if(count[valu-'a'] > 0){
//                printf("%c -> %d\n",valu, count[valu - 'a']);
//            }
            printf("%d ",count[valu - 'a']);

    }




}
