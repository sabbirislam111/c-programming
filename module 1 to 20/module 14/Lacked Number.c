#include<stdio.h>
int main(){

    char numbers[10];
    gets(numbers);

    int frqe[10] ={0};
    int i;
    for( i = 0; i < 9; i++){
       char c = numbers[i];
       int digit = c - '0';
       frqe[digit]++;
       //printf("%d -> %d \n", i, digit);


    }
    for( i = 0; i <= 9; i++){

       //printf("%d -> %d \n", i,frqe[i]);
       if(frqe[i] == 0){
        printf("%d", i);
    }
    }





 return 0;
}

