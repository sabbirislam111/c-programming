#include<stdio.h>
#include <math.h>
int main(){

/*int num;
scanf("%d", &num);
int multiple;
int grade;

for(int i = 1, j =1; i <= num, j <= 100; i++, j++){
    grade = i;
    scanf("%d", &grade);
    for(int  j =1;  j <= grade;  j++){
        multiple = j * 5;


       if(grade < multiple){
            int sub = multiple - grade;


            if( grade < 40){
                printf("%d %d\n",grade ,grade );
            }
           else if(sub < 3){
                 printf("%d %d\n", grade, multiple);

            }
            else if(sub >= 3){
               printf("%d %d\n", grade, grade);
            }

            break;

       }

    }

}*/

  int n, e = 0;
  scanf("%d",&n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d",&a[i]);
  }
  for (int i = 0; i < n; i++) {

    if (a[i] >= 38) {

      for (int j = a[i]; e != 1; j++) {
        if (j % 5 == 0) {
          if (j - a[i] < 3) {
            a[i] = j;
          } else if (j - a[i] == 3) {
            a[i] = a[i];
          }
          e = 1;
        }
      }
      e = 0;

    }

    else {
      a[i] = a[i];
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d\n",a[i]);
  }





    return 0;
}
