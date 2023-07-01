#include<stdio.h>
#include<stdbool.h>
int main(){
    int year;
    scanf("%d", &year);

    for(int y = year + 1; ; y++){


        int frq[10] = {0};
        bool repet = false;

        int caryear = y;
        while(caryear > 0){
            int d = caryear%10;
            caryear/=10;
            frq[d]++;

            if(frq[d] >= 2){
               repet = true;
            }
        }
        if(!repet){
            printf("%d\n", y);
            break;
        }

    }



 return 0;
}
