#include<stdio.h>
#include<string.h>
int check_palindrome(char str[]){
    int len = strlen(str);
    int i = 0;
    int j = len - 1;
    int count = 0;
    while(i <= j){
        if(str[i] != str[j]){
           count+= 2;
        }
        i++;
        j--;
    }
    return count;

}

int main(){

    char str[100];
    gets(str);
    int ans = check_palindrome(str);
    printf("%d", ans);

  return 0;
}
