#include<stdio.h>
#include<stdbool.h>
struct age{
    int day;
    int month;
    int year;

};

bool isFrstDay(struct age date){
    return date.day ==1 && date.month == 1;

}

int main(){
    struct age date = {1, 1, 2022};


    if(isFrstDay(date)){
        printf("Happy New year");
    }


}
