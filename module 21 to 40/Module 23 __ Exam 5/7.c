#include<stdio.h>
#include<stdbool.h>
bool is_reverse_sorted (int n, int arr[]) {
  for(int i=0; i < n-1; i++) {
    if(arr[i] < arr[i+1]) {
       return false;
    }
  }
  return true;
}



int main(){

int n;
scanf("%d", &n);

int a[n];
for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
}

int ans = is_reverse_sorted (n, a);
printf("%d",ans);

return 0;
}

