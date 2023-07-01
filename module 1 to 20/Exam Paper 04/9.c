#include<stdio.h>
void rev(int siz, int* num[]){

    for(int i = siz-1; i >= 0; i--){
        printf("%d ",num[i]);
    }

}


int main(){

int n;
scanf("%d", &n);

int* num[n];
for(int i = 0; i < n; i++){

    scanf("%d", &num[i]);
}

int siz = sizeof(num)/sizeof(num[0]);
//printf("siz %d\n", siz);

rev(siz, &num);

}
