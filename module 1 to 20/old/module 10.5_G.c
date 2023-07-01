#include<stdio.h>

int main(){
    int cen;
    int y;
    scanf("%d", &y);

    if(y <= 100){
        printf("1");
    }
    else if(y % 100 == 0){
        cen = y / 100;
        printf("%d", cen);
    }
    else{
      cen = y/100 + 1;

      printf("%d", cen);
    }




    return 0;
}
