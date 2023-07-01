#include<stdio.h>

struct age{
    int day;
    int month;
    int year;

};

struct age getFirstDay(int year){
    struct age ans = {1, 1, year};
    return ans;
};

void print (struct age year){

    printf("%d-%d-%d", year.day, year.month, year.year);

}



int main(){

    struct age year = getFirstDay(2050);

    print(year);


}
