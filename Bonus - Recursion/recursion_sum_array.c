#include<stdio.h>
int sum(int *a, int indx, int siz){

    if(indx == siz) return 0;
    int baki_sum = sum(a, indx+1, siz);
    int total_sum = baki_sum+a[indx];
    return total_sum;


}


int main(){
    int arr[5] ={1,2,3,4,5};
    int ans = sum(arr,0, 5);
    printf("%d", ans);


 return 0;
}
