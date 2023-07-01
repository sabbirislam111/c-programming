#include<stdio.h>
int main(){

    int size = 10;
    float* a = (float*)malloc(size * sizeof(float));

    int count = 0;
    for(int i = 0; i < size; i++){
     scanf("%f", &a[i]);
       count++;

    }
    int ans = sizeof(a[0])*count;
    printf("%d", ans);










}
