#include<stdio.h>
struct age{
    int day;
    int month;
    int year;

};

int main(){

struct age sabbir = {2, 6, 1997};

sabbir = (struct age){1, 1, 2022};

printf("%d-%d-%d", sabbir.day, sabbir.month, sabbir.year);


}
