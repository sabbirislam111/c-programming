#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d", &n);

    char ch[101];


    while(n--){
       scanf("%s", ch);
       int len = strlen(ch);
       printf("%c", ch[0]);

       for(int i = 1; i < len; i += 2){
            printf("%c", ch[i]);
       }
       printf("\n");
    }


 return 0;
}
