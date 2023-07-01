#include<stdio.h>

int squire(int num){
    int squ = num * num;
    return squ;
}

int main(){

int n;
scanf("%d", &n);
int ans = squire(n);

printf("%d", ans);


return 0;
}
