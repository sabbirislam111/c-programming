#include<stdio.h>
void product(int n, int arr[]){



}

int main(){
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }


    int prod=1;
    for (int i=0; i<n; i++) {
        prod = prod * *(a + i);
    }
    printf("%d", prod);


}
