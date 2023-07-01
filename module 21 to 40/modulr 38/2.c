#include<stdio.h>
struct Students{
    char name[100];
    int id;
    int marks;
};
struct unique_stu{
    char name[100];
    int id;
    int total;
};


int main(){
    int n;
    scanf("%d", &n);
    struct Students stu[n];
    struct unique_stu sabbir = {"sabbir", 1010, 0};
    struct unique_stu salman = {"salman", 2020, 0};

    for(int i = 0; i < n; i++){
        scanf("%s %d %d", stu[i].name, &stu[i].id, &stu[i].marks);
            if(stu[i].id == sabbir.id){
                sabbir.total += stu[i].marks;
            }
            if(stu[i].id == salman.id){
                salman.total += stu[i].marks;
            }
        }

printf("%s %d %d\n%s %d %d", sabbir.name , sabbir.id, sabbir.total, salman.name, salman.id, salman.total);



 return 0;
}
