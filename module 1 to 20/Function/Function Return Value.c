#include<stdio.h>

 calcgcd(int a, int b){

        while(b > 0){
          int temp = a % b;
            a = b;
            b = temp;

        }
        int gcd = a;
        return gcd;

    }





int main()
{
  int n1, n2;
  scanf("%d %d", &n1, &n2);

  int g = calcgcd(n1, n2);
  printf("gcd = %d\n", g);

  n1 /= g;
  n2 /= g;

  printf("%d/%d", n1, n2);

}
