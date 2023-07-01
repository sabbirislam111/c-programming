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

struct Fraction subtract(struct Fraction a, struct Fraction b){
    struct Fraction sub;
    sub.lob = a.lob * b.hor + b.lob * a.hor;
    sub.hor = a.hor*b.hor;
    return sub;


};

int main(){
  struct Fraction a, b;
  a =  inpurFraction();
  b =  inpurFraction();

  a = reduce(a);
  b = reduce(b);

  print(a);
  printf(" + ");
  print(b);
  printf(" = ");

  struct Fraction sub = subtract(a, b);
  sub = reduce(sub);
  print(sub);
  printf("\n");



}
