#include<stdio.h>
void takeNegatives(int siz, int num[]){
    int *out = (int*) malloc(siz * sizeof(int));
    int count = 0;
    for(int i = 0; i < siz; i++){
        if(num[i] < 0){
            out[i] = num[i];
            printf("%d ", out[i]);
        }
    }



}
int main(){

int n;
scanf("%d", &n);
int num[n];
for(int i = 0; i < n; i++){

    scanf("%d", &num[i]);
}
    takeNegatives(n,num);


        return 0;
}
