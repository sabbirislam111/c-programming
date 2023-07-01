#include<stdio.h>
#include<string.h>


int truncate(int n, char ch[]){

    for(int i = 0; i < n; i++){
       printf("%c", ch[i]);
    }


}





int main(){
 char ch[] = "abcd";
 int n;
 scanf("%d", &n);
 int ln = strlen(ch);
 truncate(n, ch);


}
