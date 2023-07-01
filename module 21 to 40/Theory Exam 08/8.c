#include<stdio.h>
#include<stdbool.h>
bool odd_even(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int n;
    scanf("%d", &n);
    bool ans = odd_even(n);

    if(ans){
        printf("Even");
    }
    else{
       printf("Odd");
    }
    return 0;
}




void odd_even(int n){
    if(n % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

}

int main(){
    int n;
    scanf("%d", &n);
    odd_even(n);

}


bool odd_even(){

    int n;
    scanf("%d", &n);

    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    bool ans = odd_even();
    if(ans){
        printf("Even");
    }
    else{
        printf("Odd");
    }

}


void odd_even(){

    int n;
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

}

int main(){
    odd_even();

}
