
#include<stdio.h>
int main(){
  int N, A, B;
  scanf("%d %d %d",&N, &A, &B);
  int need = (N * A * B) * 2;
  printf("%d", need);

  return 0;
}
