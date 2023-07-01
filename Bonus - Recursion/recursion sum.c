#include<stdio.h>
int sum(int val){

    if(val == 5) return 5;

    int smaller_sum = sum(val+1);
    int total_sum = smaller_sum + val;
    return total_sum;

}


int main(){

    int ans = sum(1);
    printf("%d", ans);



    return 0;
}
