#include<stdio.h>
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

 return 0;
}
