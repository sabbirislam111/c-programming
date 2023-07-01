#include<stdio.h>
int frq[2001];
int main(){

    int n, num, i;
    scanf("%d", &n);


    for(i = 0; i < n; i++){
        scanf("%d", &num);
        frq[num]++;

    }
      int count = 0;
      for(i = 1; i <= n; i++){
        if(frq[i]== 0){
            printf("No\n");
            count++;
            break;
        }
        printf("%d ", count);
    }

    if(count == 0){
        printf("Yes\n");
    }






 return 0;
}
