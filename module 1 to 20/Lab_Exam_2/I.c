#include<stdio.h>
int main(){
int  n;
scanf("%d", &n);


if(n >= 0 && n <= 100){
    if(n >= 0 && n < 40){

       n = 40 - n;
       printf("%d",n);

    }
    else if(n >= 40 && n < 70){
       n = 70 - n;
       printf("%d",n);
    }
    else if(n >= 70 && n < 90){
       n = 90 - n;
       printf("%d",n);
    }
    else{
        printf("expert");
    }

}

 return 0;
}
