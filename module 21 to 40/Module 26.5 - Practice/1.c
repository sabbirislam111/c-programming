#include<stdio.h>
struct Number{
    int min;
    int max;

};


struct Number minmax(int a, int b){
    struct Number val;
    if(a < b){
        val.max = b;
    }

        val.min = a;

    return val;
};


int main(){
    struct Number ans;
    ans = minmax(5, 10);
    printf("min %d, max %d",ans.min, ans.max);

}
