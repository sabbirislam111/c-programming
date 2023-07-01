
#include<stdio.h>
int main() {
    int min, max, i, count;
    scanf("%d %d", &min, &max);

    while(min < max){
        count = 0;
        //if(min <= 1){
          //++min;
          //printf("%d", min);
          //continue;

        //}

        for(i = 2; i <= min/2; i++){
            if(min % i == 0){
                count = 1;
                break;
            }
        }


          if(count == 0)
            printf("%d\t",min);
            ++min;


        }
return 0;
    }
