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

struct Fraction celcius(struct Fraction a){
    struct Fraction cel;
    cel.lob = (5*(a.lob-32*a.hor));
    printf("Lob %d\n", cel.lob);
    cel.hor = (9*a.hor);
    printf("Hor %d\n", cel.hor);
    return cel;


};

int main(){
  struct Fraction a;
  a =  inpurFraction();
  //b =  inpurFraction();

  //a = reduce(a);
  //b = reduce(b);

  print(a);
  printf(" = ");

  struct Fraction cel = celcius(a);
  cel = reduce(cel);
  print(cel);
  printf("\n");



}
