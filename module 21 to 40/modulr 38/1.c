#include<stdio.h>
struct Students{
    char name[100];
    int id;
    int marks;
    int total;
};

int main(){
    int n;
    scanf("%d", &n);
    struct Students stu[n];

    for(int i = 0; i < n; i++){
        scanf("%s %d %d", stu[i].name, &stu[i].id, &stu[i].marks);
        int sum = 0;
        for(int j = 0; j < i; j++){
          if(stu[i].id == stu[j].id){
            sum+=stu[j].marks;
          }
        }
        int new_sum = stu[i].marks+sum;
        stu[i].total = new_sum;
    }



     for(int i = 0; i < n; i++){
        printf("%s %d %d %d\n", stu[i].name, stu[i].id, stu[i].marks, stu[i].total);
    }
 return 0;
}
