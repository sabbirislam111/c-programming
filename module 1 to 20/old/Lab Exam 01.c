#include<stdio.h>
int main(){


    int num;
    scanf("%d", &num);
    int count = 0;
    for(int p = 1, t =1; t <= num; p++, t++){
        scanf("%d", &p);

        if(p < 0){
            count++;

        }

    }
    printf("%d", count);

return 0;
}

