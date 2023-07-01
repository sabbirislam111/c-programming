#include<stdio.h>
int func(int* a) {
     printf("%d\n", a);

}

int main(){

    int a= 4;

    func(&a);

}
