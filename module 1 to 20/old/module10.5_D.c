#include<stdio.h>

int main(){

int x, a, b, c;
scanf("%d %d %d %d", &x, &a, &b, &c);

while(1){

    if(x >= a){
        x = x - a;
    }
    else{
        printf("F\n");
        break;
    }

    if(x >= b){
        x = x - b;

    }
    else{
        printf("M\n");
        break;
    }

    if(x >= c){
        x = x - c;

    }
    else{
        printf("T\n");
        break;
    }
}

return 0;
}
