#include<stdio.h>
struct Students{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;

};
void print(struct Students stu){
    printf("%s %d %d %c %d\n", stu.name, stu.marks, stu.roll , stu.section, stu.whichClass);

}

int main(){
    struct Students higmark = {.marks = 0};
    struct Students lowmarks = {.marks = 100};
    int n;
    scanf("%d", &n);
    int arr[n];
    struct Students stu[n];
    for(int i = 0; i < n; i++){
        scanf("%s %d %d %c %d", &stu[i].name, &stu[i].marks, &stu[i].roll , &stu[i].section, &stu[i].whichClass);
    }
    printf("\n\n");
    for(int i = 0; i < n; i++){
        if(stu[i].marks > higmark.marks){
            higmark = stu[i];
        }
    }
    print(higmark);

     for(int i = 0; i < n; i++){
        if(stu[i].marks < lowmarks.marks){
            lowmarks = stu[i];
        }
    }
    print(lowmarks);



 return 0;
}
