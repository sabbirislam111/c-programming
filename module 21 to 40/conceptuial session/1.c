#include<stdio.h>
int frq[2001];
int main(){
   int n, num;
   scanf("%d", &n);

   for(int i = 0; i < n; i++){
        scanf("%d", &num);
        frq[num]++;
   }

//   for(int i = 0; i < 10; i++){
//        printf("%d %d\n", i, frq[i]);
//   }

    for(int i = 0; i < 2000; i++){
        if(frq[i] == 0){
            printf("%d", i);
            break;
        }
   }

}
