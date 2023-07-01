#include<stdio.h>
int main(){
int  val, i, j, n, p, q, flag = 0;
scanf("%d", &n);
scanf("%d", &p);
int x[p], merge[n];

for(i = 0; i < p; i++){
    scanf("%d", &x[i]);
    val = x[i];
    merge[val] = 1;
}


scanf("%d", &q);
int y[q];

for(i = 0; i < q; i++){
    scanf("%d", &y[i]);
    val = y[i];
    merge[val] = 1;
}

for(i = 1; i <= n; i++){
   printf("%d", merge[i]);
}




}
