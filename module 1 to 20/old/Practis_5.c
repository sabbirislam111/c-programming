#include<stdio.h>
int main()
{
 /*int a,b;
  char c;
  scanf("%d %c %d", &a, &c, &b);

  int sum, sub, product, div, mod;
  if(c == '+'){
    sum = a + b;
    printf("sum = %d", sum);
  }
  else if(c == '-'){
    sub = a - b;
    printf("sub = %d", sub);
  }
  else if(c == '*'){
    product = a * b;
    printf("product = %d", product);
  }
   else if(c =='/' && b == 0){
    printf("not div by 0");
  }
  else if(c == '/'){
      div = a / b;
    printf("div = %d", div);
  }
  else if(c == '%'){
    mod = a % b;
    printf("mod = %d", mod);
  }

  else{
    printf("jhfgshd");
  } */




  /*int num;
  scanf("%d", &num);

  if(num > 0){
    printf("1");
  }
  else if(num == 0){
    printf("0");
  }
  else{
    printf("-1");
  }*/




  /*int a, b;
  scanf("%d %d", &a, &b);

  if(a < b){
    printf("largest number is %d\n", b);
  }
  else{
    printf("largest number is %d", a);
  }*/



  /*int a, b;
  scanf("%d %d", &a, &b);

  a < b ? printf("largest number is %d\n", b): printf("largest number is %d", a);*/




 /*int num;
  scanf("%d", &num);
  int sum = 0;

  for(int i = 1; i <= num; i++){
    printf("%d\n", i);
    sum = sum + i;
  }
  printf("sum = %d", sum);*/


/*int num;
  scanf("%d", &num);
  int sum = 0;

  for(int i = 1; i <= num; i+=2){
    printf("%d\n", i);
    sum = sum + i;
  }
  printf("sum = %d", sum);*/




  /*int sum = 0;

  for(int i = 50, j = 1; j <= 20; i--, j++){
    printf("%d\n", i);
    sum = sum + i;
  }
  printf("sum = %d", sum);*/




  /*int sum = 0;

  for(int i = 2, j = 1; j <= 10 ; i+=3, j++){
    printf("%d\n", i);
    sum = sum + i;
  }
  printf("sum = %d", sum);*/



/*int num;
  //scanf("%d", &num);
  int sum = 0;

  for(int i = 100; i > 0 ; i-=3){
    printf("%d\n", i);
    sum = sum + i;
  }
  printf("sum = %d", sum);*/


int car = 0;
 for(int i = 1; i <= 5; i++) {
		for(int j = 1; j < i; j++) {
                car++;
			printf("%d", car);

		}
        printf("\n");
	}





    return 0;
}
