#include<stdio.h>
struct age{
    int day;
    int month;
    int year;

};

int dateInMinth[12] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};

int main(){

struct age start;
scanf("%d %d %d", &start.day, &start.month, &start.year);

int n;
scanf("%d", &n);
struct age nextDate = start;
for(int i = 0;i < n; i++){

    if(nextDate.day != dateInMinth[nextDate.month -1]){
        nextDate.day++;
    }
    else if(nextDate.month != 12){
       nextDate.day = 1;
       nextDate.month++;

    }
    else{
        nextDate.day = 1;
        nextDate.month = 1;
        nextDate.year++;
    }
    printf("%d-%d-%d\n", nextDate.day, nextDate.month, nextDate.year);
 }


}
