#include<stdio.h>
void swap(int*a, int*b){
    int temp = *a;
        *a = *b;
        *b = temp;
}


void sort(int n, int a[]) {
    for (int steps=0; steps<n; steps++) {
        for (int i=n-1; i >= 0; i--) {
           if(a[i] < a[i+1]){
                swap(&a[i+1], &a[i]);
            }
       }
   }
}



int main(){

int n;
scanf("%d", &n);

int a[n];
for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
}

sort(n, a);

for(int i = 0; i < n; i++){
    printf("%d ", a[i]);
}
return 0;
}


