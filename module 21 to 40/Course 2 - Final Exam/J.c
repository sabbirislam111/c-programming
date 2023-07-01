#include<stdio.h>
#include<stdbool.h>
#include<string.h>


struct Students{
    char name[100];

};

struct Unique_stu{
    char name[100];

};


int main(){
    int n;
    scanf("%d", &n);
    struct Students stu[n];
    struct Unique_stu unique_stu[n];
    int k = 0;


    for(int i = 0; i <= n; i++){
        gets(stu[i].name);
    }

         for(int i = 0; i <= n; i++){
       bool found = false;
       for(int j = 0; j < k; j++){
            if(strcmp(unique_stu[j].name, stu[i].name) == 0){
               found = true;

               printf("Yes");
               return 0;
            }
       }
       if(found == false){
          strcpy(unique_stu[k].name, stu[i].name);

          k++;
       }

    }

    printf("No");



 return 0;
}
