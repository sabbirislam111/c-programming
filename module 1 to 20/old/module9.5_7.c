#include<stdio.h>
int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);


          if(a == b && b == c && c == a){
            printf("No");
       }
       else if( (a == b) && (c != a || b) ){
        printf("Yes");

       }
       else if( (a == c) && (b != a || c) ){
        printf("Yes");

       }
       else if( (b == c) && (a != b || c) ){
        printf("Yes");

       }
       else if(a != b && b != c && c != a){
            printf("No");
       }

       else{
            printf("No");
       }

    return 0;
}
