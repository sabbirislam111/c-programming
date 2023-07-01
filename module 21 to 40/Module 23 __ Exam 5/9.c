#include<stdio.h>
#include<string.h>
int main(){
    char ch[] = "hello";
    int siz = strlen(ch);
    char chPo;
    scanf("%c", &chPo);
    for(int i = 0; i < siz; i++){
      if(chPo == ch[i]){
        printf("%d", i);
      }

    }
return 0;
}
