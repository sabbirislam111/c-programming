#include<stdio.h>

struct age{
    int date;
    int month;
    int year;

    };

int main(){

   struct age sabbir, sadia;

   printf("Enter sabbir age :");
   scanf("%d %d %d", &sabbir.date, &sabbir.month, &sabbir.year);

   printf("Enter sadia age :");
   scanf("%d %d %d", &sadia.date, &sadia.month, &sadia.year);

   if(sabbir.date == sadia.date && sabbir.month && sadia.month && sabbir.year == sadia.year){
    printf("Same");
   }
   else{
    printf("Not same");
   }

}
