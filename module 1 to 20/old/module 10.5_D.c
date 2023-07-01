#include<stdio.h>
int main(){

    int aos, a, b, c, count= 0;
    int remain;
    scanf("%d %d %d %d",&aos, &a, &b, &c);

    while(aos > a){

      int A = aos - a;
      int B = A - b;
      int C = B - c;

      if( aos < a){
        printf("F");
        break;
      }
      else if(A < b){
        printf("M");
      }
      else if(B < c){
        printf("T");
      }




    }


















    return 0;
}
