#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;

};
struct studentInfo{
    char* name[100];
    int clas;
    int roll;
    struct Date dob;

};

void print(struct Date year){

    printf("%d-%d-%d", year.day, year.month, year.year);

}
struct Date inputDate(){
   struct Date date;
   scanf("%d %d %d", &date.day, &date.month, &date.year);
   return date;
};


void printstedent(struct studentInfo stu1){
    printf("Name : %s\n", stu1.name);
    printf("Class : %d\n", stu1.clas);
    printf("Roll : %d\n", stu1.roll);

    printf("DOB: ");
    print(stu1.dob);

}
struct studentInfo inputStudent(){

    struct studentInfo st;

    printf("Name: ");
    gets(st.name);
    gets(st.name);

    printf("Class : ");
    scanf("%d", &st.clas);

    printf("Roll : ");
    scanf("%d", &st.roll);

    printf("DOB: ");
    st.dob = inputDate();
    return st;
};


int main(){

    int n;
    printf("Number of student in a class: ");
    scanf("%d", &n);

    struct studentInfo st[n];
    for(int i = 1; i <= n; i++){
        printf("Input student %d info :\n", i);
        st[i] = inputStudent();
    }

    for(int i = 1; i <= n; i++){
        printf("Input student %d info :\n", i);
        printstedent(st[i]);
    }
}
