#include<stdio.h>
int main(){

  int fast = 0, second = 1, count = 0, fibo, n;
  scanf("%d", &n);

  do{
    if(count <= 1){
        fibo = count;
    }
    else{
       fibo = fast + second;
       fast = second;
       second = fibo;
    }
    printf("%d ", fibo);
    count++;
  }
  while(count < n);






return 0;
}
