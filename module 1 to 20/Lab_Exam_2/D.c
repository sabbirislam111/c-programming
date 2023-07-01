#include<stdio.h>
int main(){

int n, i, A = 0, D = 0;
scanf("%d", &n);
char c;

for(i = 0; i <= n; i++){
   scanf("%c", &c);

   if(c == 'A'){
    A++;
   }
   else if(c == 'D'){
    D++;
   }




}

if( A > D){
    printf("Anton");
}
else if( A < D){
    printf("Danik");
}
else{
    printf("Friendship");
}




 return 0;
}
