#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;

};
struct studentInfo{
    char name[100];
    int clas;
    int roll;
    struct Date dob;

};

void print(struct Date year){

    printf("%d-%d-%d", year.day, year.month, year.year);

}

void printstedent(struct studentInfo stu1){
    printf("Name: %s\n", stu1.name);
    printf("Class : %d\n", stu1.clas);
    printf("Roll : %d\n", stu1.roll);

    printf("DOB: ");
    print(stu1.dob);

}

int main(){
    struct studentInfo stu1 = {.clas = 8, .roll = 10, .dob = 2, 6, 1997};
    char* name = "Sabbir Mollah";
    strcpy(stu1.name, name);
    printstedent(stu1);


}
