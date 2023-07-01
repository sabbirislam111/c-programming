#include<stdio.h>

void makeDauble(int* a){
    *a *= 2;
}


int main(){

int a = 10;
makeDauble(&a);

printf("%d", a);


}
