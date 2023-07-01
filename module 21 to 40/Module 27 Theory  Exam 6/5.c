#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;

};

struct Student {
    char name[100];
    int roll;
    int clas;
    struct Date dob;
};



void print(struct Date year){

    printf("%d-%d-%d", year.day, year.month, year.year);

}

void printstedent(struct Student stu1){
    printf("Name: %s\n", stu1.name);
    printf("Class : %d\n", stu1.clas);
    printf("Roll : %d\n", stu1.roll);

    printf("DOB: ");
    print(stu1.dob);

}

int main(){
    struct Student stu1 = {.clas = 8, .roll = 10, .dob = 2, 6, 1997};
    char* name = "Sabbir Mollah";

    // Update part;
    char* name2 = "Moynul islam";
    stu1.roll = 20;
    strcpy(stu1.name, name2);


    printstedent(stu1);


}


