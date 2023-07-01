#include<stdio.h>
struct Indexwise{
    int sum[3];
};

struct Indexwise arraysum(int n, int a[], int b[]){
    struct Indexwise arr;

   for(int i = 0; i < n; i++){
      arr.sum[i] = a[i] + b[i];
   }
   return arr;
}

int main(){

int n = 3;

int a[]={2, 3, 4};
int b[]={1, 2, 3};


    struct Indexwise ans;
    ans = arraysum(n, a, b);
    for(int i = 0; i < n; i++){
        printf("%d ", ans.sum[i]);
    }

}
