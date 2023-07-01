#include<stdio.h>

void printGcd(int x,int y){

    while(y > 0){
        int temp = x%y;
        x = y;
        y = temp;
    }
    int gcd = x;
    printf("GCD = %d", gcd);


}



int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printGcd(n1, n2);

 return 0;
}
