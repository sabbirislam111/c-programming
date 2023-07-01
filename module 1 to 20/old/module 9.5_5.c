#include<stdio.h>
int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    int sum = (a + b);
    int sub = (a - b);
    int product= (a * b);

    if(sum >= sub && sum >= product){
        printf("%d", sum);
    }
    else if(sub >= sum && sub >= product){
        printf("%d", sub);
    }
    else{
        printf("%d", product);
    }

    return 0;
}
