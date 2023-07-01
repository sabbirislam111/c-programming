#include<stdio.h>
#include<limits.h>
int main(){

    int long long a;
    scanf("%lld", &a);
    int  max =  INT_MAX;
    int  min =  INT_MIN;

   if(a >= min && a<= max){
    printf("Yes");
   }
   else{
    printf("No");
   }



    return 0;
}
