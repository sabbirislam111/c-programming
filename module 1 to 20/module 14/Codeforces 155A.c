#include<stdio.h>
#include<stdbool.h>
int main(){

    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }

    int ans = 0;
    for(i = 0; i < n; i++){
       if(i == 0) continue;

        bool isMax = true, isMin = true;

        for(int j =0; j<i; j++){
                printf("sabbir j %d\n", arr[j]);
                printf("\n");
                printf("sabbir i %d\n", arr[i]);

            if(arr[j] <= arr[i]){
                isMin = false;
                printf("sabbir min %d\n", isMin);
            }
            if(arr[j] >= arr[i]){
                isMax = false;
            }

            }
            if(isMax || isMin){
                ans++;
        }

    }

printf("%d", ans);






 return 0;
}
