#include<stdio.h>
int main(){
    char ch[100];
    gets(ch);


    int index = 0;
    while(ch[index] != '\0'){
       if(ch[index] == 'a'){
            printf("%d ", index);
       }
       if(ch[index] == 'e'){
            printf("%d ", index);
       }
       if(ch[index] == 'i'){
            printf("%d ", index);
       }
       if(ch[index] == 'o'){
            printf("%d ", index);
       }
       if(ch[index] == 'u'){
            printf("%d ", index);
       }
       index++;
    }



    for(int i = 0; i < 26; i++){

    }


}
