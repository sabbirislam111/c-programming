#include<stdio.h>
int main(){

    int a, b, c, d, e, f, x, result_a, result_b;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    if(a <= x){
        x -= a;
        if(x >= c){
            x -= c;
            result_a = (a+x) * b;

        }
        else{
          result_a = a * b;

        }


    }
    else{
          result_a = a * b;

        }



     if(d <= x){
        x -= d;
        if(x >= f){
            x -= f;
            result_b = (d+x) * e;

        }
        else{
            result_b = d * e;

        }

    }
    else{
          result_b = d * e;

        }


    if(result_a > result_b){
        printf("Takahashi");
    }
    else if(result_a < result_b){
        printf("Aoki");
    }
    else{
        printf("Draw");
    }



 return 0;
}
