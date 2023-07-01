#include<stdio.h>
int main(){
    int n, fence, hi, wi =0, count = 0;
    scanf("%d %d", &n, &fence);

    for(int i = 1; i<= n; i++){
        scanf("%d", &hi);
        if(hi <= fence){
            wi = 1;
            count = count + wi;



        }
        else{
            wi = 2;
            count = count + wi;


        }


    }
    printf("%d",count);


    return 0;
}
