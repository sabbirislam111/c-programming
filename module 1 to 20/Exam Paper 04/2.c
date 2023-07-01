#include<stdio.h>
void result(int num){
 if(num < 0  && num > 100){
    printf("Not a vild number");
 }
 else if(num >= 0 && num <=32){
    printf("F");
 }
 else if(num >= 33 && num <=40){
    printf("D");
 }
 else if(num >= 41 && num <=50){
    printf("C");
 }
  else if(num >= 51 && num <=60){
    printf("B");
 }
   else if(num >= 61 && num <=70){
    printf("A");
 }
   else if(num >= 71 && num <=100){
    printf("A+");
 }



}

int main(){
  double n;
  printf("please enter a number from 1 to 100");
  printf("\n");
  scanf("%lf",&n);

    result(n);


}
