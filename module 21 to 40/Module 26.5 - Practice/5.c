#include<stdio.h>

struct Fraction{
    int lob;
    int hor;

};


int gcd(int a, int b){
    while(b > 0){
        int temp = a%b;
            a = b;
            b = temp;
    }
    return a;
}

struct Fraction reduce(struct Fraction r){
    int g = gcd(r.lob, r.hor);
        r.lob/= g;
        r.hor/= g;
        return r;

};

struct Fraction inpurFraction(){
    struct Fraction f;
    scanf("%d", &f.lob);
    scanf("%d", &f.hor);
    return f;
};

void print(struct Fraction f){
    printf("%d/%d", f.lob, f.hor);
}
//
//struct Fraction checkEqual(struct Fraction a, struct Fraction b, struct Fraction c){
//    struct Fraction equal, equal2, equal3;
//
//    equal  = reduce(a);
//    equal2  = reduce(b);
//    equal3  = reduce(c);
//
//
//};


//    struct Fraction subtract(struct Fraction a, struct Fraction b, struct Fraction c){
//    struct Fraction sub;
//    sub.lob = a.lob * b.hor + b.lob * a.hor;
//    sub.hor = a.hor*b.hor;
//    return sub;
//
//
//    };




int main(){
  struct Fraction a, b, c;
  a =  inpurFraction();
  b =  inpurFraction();
  c =  inpurFraction();

  a = reduce(a);
  b = reduce(b);
  c = reduce(c);

  //checkEqual(a,b,c);

    struct Fraction equal, equal2, equal3;

    equal  = reduce(a);
    print(equal);
    printf("\n");
    equal2  = reduce(b);
    print(equal2);
    printf("\n");
    equal3  = reduce(c);
    print(equal3);
    printf("\n");


    if(equal.lob == equal2.lob == equal3.lob && equal.hor == equal2.hor == equal3.hor){
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }







  //a = checkEqual(a,b, c);
//  b = checkEqual(b);
//  c = checkEqual(c);
//  print(a);
//  printf(" = ");
//
//  struct Fraction cel = celcius(a);
//  cel = reduce(cel);
//  print(cel);
//  printf("\n");



}

