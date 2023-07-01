#include<stdio.h>
int swap(int *a, int *b){

    int temp = *a;
        *a = *b;
        *b = temp;

}


int main(){
int a = 100, b = 200;

   swap(&a, &b);
   printf("%d %d",a, b);


 return 0;
}
