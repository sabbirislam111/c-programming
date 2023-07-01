
#include<stdio.h>
int main(){
    int last_digit;
    int person,gift,start;
    scanf("%d %d %d",&person,&gift,&start);

    while(gift>=1){

        last_digit = start;

        start++;
        if(start > person){
            start=1;
        }
        gift--;

    }
    printf("%d", last_digit);

 return 0;
}
