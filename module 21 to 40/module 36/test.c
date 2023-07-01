#include<stdio.h>
void change(int *a){
    *a = 100;
}


int main(){
    int i = 10;
    change(&i);
    printf("%d", i);
 return 0;
}
