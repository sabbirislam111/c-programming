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

struct Fraction reduce(struct Fraction f){
    int g = gcd(f.lob, f.hor);
        f.lob /= g;
        f.hor/= g;
        return f;

};

void print(struct Fraction f){
    printf("%d/%d", f.lob, f.hor);

}
struct Fraction inputFraction(){
  struct Fraction f;
  scanf("%d %d", &f.lob, &f.hor);
  return f;

};

struct Fraction add(struct Fraction a, struct Fraction b){
    struct Fraction sum;
    sum.lob = a.lob * b.hor + b.lob * a.hor;
    sum.hor = a.hor*b.hor;
    return sum;


};



int main(){
  struct Fraction a, b;
  a = inputFraction();
  b = inputFraction();

  a = reduce(a);
  b = reduce(b);


  print(a);
  printf(" + ");
  print(b);
  printf(" = ");


  struct Fraction sum = add(a, b);
  sum = reduce(sum);
  print(sum);
  printf("\n");


}
