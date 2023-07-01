#include<stdio.h>
int main(){

    int a, b, c, d, e, f, x, result_a, result_b;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);


     if(a+c < x){
            x = x - (a + c);



            if(a+b < x){
               x = x - (a + c);

                result_a = (a  + x) * b;
            }
            else{
               result_a = (a  + x) * b;
            }

    }

    else if( a+c > x){
      result_a = a * b;


    }
    else{
       result_a = (a + c) * b;


    }




    if(d+f < x){
            x = x - (d + f);



            if(d+f < x){
               x = x - (d + f);

                result_a = (d  + x) * b;
            }
            else{
               result_b = (d  + x) * e;
            }

    }
     else if( d+f > x){
      result_b = d * e;


    }

    else{
       result_b = (d + f) * e;


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
