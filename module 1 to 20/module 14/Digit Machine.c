#include<stdio.h>
int main(){

    int n, i;
    //scanf("%d", &n);
    int arr[10];

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

    }

    int curent = 0;
    for(i = 0; i < 3; i++){

        curent = arr[curent];

    }

    printf("%d ", curent);






 return 0;
}
