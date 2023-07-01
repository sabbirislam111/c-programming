#include<stdio.h>
#include<stdbool.h>
#include<string.h>
struct Students{
    char name[100];
    int id;
    int marks;
};

struct Unique_stu{
    char name[100];
    int id;
    int total;
};


int main(){
    int n;
    scanf("%d", &n);
    struct Students stu[n];
    struct Unique_stu unique_stu[n];
    int k = 0;


    for(int i = 0; i < n; i++){
       scanf("%s %d %d", stu[i].name, &stu[i].id, &stu[i].marks);
       bool found = false;
       for(int j = 0; j < k; j++){
            if(unique_stu[j].id == stu[i].id){
               unique_stu[j].total += stu[i].marks;
               found = true;
            }
       }
       if(found == false){
          strcpy(unique_stu[k].name, stu[i].name);
          unique_stu[k].id = stu[i].id;
          unique_stu[k].total = stu[i].marks;
          k++;
       }

    }
    printf("\n\n");
    for(int i = 0; i < k; i++){
       printf("%s %d %d\n", unique_stu[i].name, unique_stu[i].id, unique_stu[i].total);
    }



 return 0;
}
