#include<stdio.h>

int main(){

int n, i, opinion;
scanf("%d", &n);
int sum = 0;

for(i = 1; i<= n; i++){
    scanf("%d", &opinion);
    sum = sum + opinion;


}
if( sum > 0){
    printf("HARD");
}
else{
    printf("EASY");
}


 return 0;
}
