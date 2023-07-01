#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int num[n];



    for(i = 0; i < n; i++){
        scanf("%d", num[i]);

    }
    int ans = 0, max = num[0], min = num[0];

    for(i = 1; i < n; i++){
        if(max > num[i] || min < num[i]){
          ans++;
        }
        if(max < num[i]){
            max = num[i];
        }
        if(min > num[i]){
            min = num[i];
        }
    }
    printf("%d", ans);





 return 0;
}
