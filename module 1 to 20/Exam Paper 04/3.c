#include<stdio.h>

int getGCD(int a, int b){
    while(b != 0){
        int rem = a%b;
            a = b;
            b = a;
        return b;
    }

//    if(b == 0)
//      return b;
//return getGCD(b, a%b);
}




int main(){

int num[10];
for(int i = 0; i < 10; i++){
    scanf("%d", &num[i]);
}
int gcd = num[0];

for(int i=1; i <10; i++){
      gcd = getGCD(num[i], gcd);
    }

    printf("GCD: %d", gcd);

}
