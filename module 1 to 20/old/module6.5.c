#include<stdio.h>
int main(){

   /*int num;
    scanf("%d", &num);

    for(int i = 1; i <=num; i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }*/


    /*int a,b;
    scanf("%d %d", &a, &b);
    int sum = a + b, sub = a - b;
    if( a==5 || b ==5){
        printf("true");
    }
    else if(sum == 5 || sub == 5){

        printf("true");
    }
    else{
        printf("false");
    }*/

   /*int num1, num2;
    scanf("%d, %d", &num1, &num2);
    int num_of_input;
    scanf("%d", &num_of_input);

    for(int i = 1; i <= num_of_input; i++){
        int num = i;
        scanf("%d", &num);
         int p,x;
        for(p = 1, x = 1; p,x <= 100; p++, x++){
            if((num1*p) == (num2*x)){
                printf("No");
            }
            else if((num1*p)== num || (num2*x) == num){
                printf("yes");
            }

        }

    }*/



    /*int month;
    scanf("%d", &month);
    switch(month){
    case 1:
        printf("January");
        break;
    case 2:
        printf("february");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("Jun");
        break;
    case 7:
        printf("Julay");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("december");
        break;



    }
     if( month <=0 || month >12){
        printf("invailed Number");
    }*/

    /*int num;
    scanf("%d", &num);
    int sum = 0;
    for(int i = 1; i <= num; i++){

        int num_of_input = i;
        scanf("%d", &num_of_input);

        if(num_of_input % 2 == 0){
          sum += num_of_input;

        }
    }
    printf(" sum = %d\n", sum);*/



    /*int num;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        if((i%3) == 0){
            printf("Fizz\n");
        }
        else if((i%5) == 0){
            printf("Buzz\n");
        }

        else{
            printf("%d\n", i);
        }
    }*/

    /*int num;
    scanf("%d", &num);

    int cub;
    for(int i = 1; i<=num; i++){
        cub = i * i*i;
        printf("%d and cube of the %d is :%d\n", i, i, cub);
    }*/


    int x, y;
    scanf("%d %d", &x, &y);

    int multipl, divisors;
    for(int i = x; i <=y; i++){
            //multipl = x *i;
            //printf("multipal = %d\n", multipl);
        if(i% x== 0  && y % i == 0){
            printf("%d ", i);
        }
    }





    return 0;
}
