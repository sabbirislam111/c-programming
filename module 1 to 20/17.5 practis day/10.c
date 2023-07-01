#include<stdio.h>

void avarege(int* pa, int *pb) {
	int av = (*pa + *pb)/2;

	*pa = *pb = av;

}



int main(){
    int a = 10, b = 20;
    //scanf("%d", &a);

    avarege(&a, &b);
    printf("%d %d", a, b);

}

