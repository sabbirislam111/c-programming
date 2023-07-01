#include<stdio.h>
struct Fun
{
    int sum;
};


int main(){

  struct Fun a;
  int *psum = &a.sum;
  psum = 100;
  printf("%d" ,psum);


 return 0;
}
