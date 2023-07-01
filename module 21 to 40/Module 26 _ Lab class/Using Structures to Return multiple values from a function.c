#include<stdio.h>
struct Result{
    int vagfol;
    int vagses;

};

struct Result divide(int x, int y){
    struct Result result;
    result.vagfol = x/y;
    result.vagses = x%y;
    return result;
};


int main(){
  int x = 10;
  int y = 3;

  struct Result result = divide(x, y);
  printf("%d %d\n", result.vagfol, result.vagses);

}
