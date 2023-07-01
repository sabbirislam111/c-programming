#include<stdio.h>

struct Fraction {
    int lob;
    int hor;
};

struct Fraction rev(struct Fraction n){
    struct Fraction num;
    num.lob = n.hor;
    num.hor = n.lob;
    printf("%d/%d", num.lob, num.hor);
    //return num;
};


int main(){

struct Fraction num;

num.lob = 3;
num.hor = 5;

rev(num);



}

