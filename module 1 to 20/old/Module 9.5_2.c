#include<stdio.h>
int main(){

    int n, x = 0;
    char ch[4];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", &ch);
        if(ch[1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    printf("%d", x);
    return 0;
}
