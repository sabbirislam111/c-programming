
#include<stdio.h>
#include<string.h>
int main(){
  char ch[100];
  gets(ch);
  int len = strlen(ch);

    for(int i = 0; i < len; i++){
        if(i==0){
            if(ch[i] >= 'a' && ch[i] <= 'z'){
                ch[i] = ch[i]-32;
                printf("%c", ch[i]);
            }
        }
        else{
            if(i != 0){
                printf("%c", ch[i]);
            }
        }
    }


 return 0;
}
