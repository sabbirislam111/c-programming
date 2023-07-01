#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){

/*int money = 0;
int target = 100;

while(money < target){
   printf("need more money, Enter amount :");

   int need;
   scanf("%d", & need);
   money += need;
   printf(" carrent monet Money = %d\n", money);
}*/

int x;



scanf("%d", &x);
int last_digit;
int reversed = 0;
while(x > 0){
    last_digit = x % 10;
    x/=10;

    reversed = reversed * 10 + last_digit;

}
printf("%d", reversed);

/*int x, y;
scanf("%d %d", &x, &y);

int gcd = 1;
for(int i = 1; i <= x && i <= y; i++){
    //printf("%d\n", i);
    if(x % i == 0 && y % i == 0){
       gcd = i;
    }

}
printf("%d\n", gcd);*/

/*int x, y;
scanf("%d %d", &x, &y);

while(x != 0){
    int rem = y % x;
    y = x;
    x = rem;

    printf("%d %d\n", x, y);

}

printf("%d\n", y);*/


/*while(true){
    int input;
    scanf("%d", &input);
    printf("%d\n", input);

    if(input == 10){
        break;
    }

}*/


/*for(int i = 1; i <= 10; i++){

    if( i% 2 != 0) continue;
        printf("%d\n", i);

}*/


/*int num =1234;

while(num > 0){
    int digit = num%10;
    num /= 10;
    if(digit% 2) continue;
    printf("%d", digit);

}*/


 /*srand(time(0));
 int hidden = rand()%100 +1;
 //printf("%d", hidden);
 printf("\n");

int num_of_try =0;
 while(num_of_try <= 10){
     int gess;
    scanf("%d", &gess);
    printf("%d\n", gess);

     if(gess == hidden){
        printf("you are right");
        break;
     }
     else if(gess > hidden){
        printf("gess smoller\n");
     }
     else{
        printf("get larger\n");
     }
    num_of_try++;
    if(num_of_try == 10){
        printf("you are loss");
        break;
    }
 }*/









 return 0;
}
