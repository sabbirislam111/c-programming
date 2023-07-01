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
    FILE * inputFile = fopen("inp.txt","r");
    FILE * outputFile = fopen("out.txt","w");
    if(inputFile ==NULL){
        printf("No File");
    }
    int n;
    fscanf(inputFile,"%d", &n);
    struct Students stu[n];
    struct Unique_stu unique_stu[n];
    int k = 0;


    for(int i = 0; i < n; i++){
       fscanf(inputFile,"%s %d %d", stu[i].name, &stu[i].id, &stu[i].marks);
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
    for(int i = 0; i < k-1; i++){
        for(int j = i+1 ; j < k; j++){
            if(unique_stu[i].total < unique_stu[j].total){
                struct Unique_stu temp = unique_stu[i];
                unique_stu[i]= unique_stu[j];
                unique_stu[j] = temp;
            }
        }
    }

    for(int i = 0; i < k; i++){
       fprintf(outputFile,"%s\t%d\t%d\n", unique_stu[i].name, unique_stu[i].id, unique_stu[i].total);
    }



 return 0;
}

