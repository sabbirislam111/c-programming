#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int mul;
    scanf("%d", &mul);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] * arr[j] == mul){
                printf("Yes");
                return 0;
            }

        }
    }

    printf("No");





 return 0;
}
