#include<stdio.h>
struct Students{
    char name[100];
    int rool;
    int marks;

};

struct Students higmark = {.marks = 0};
int main(){
    struct Students sabbir;


    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s %d %d",sabbir.name, &sabbir.rool, &sabbir.marks);
        if(sabbir.marks > higmark.marks){
            higmark = sabbir;
        }
    }
    printf("%s %d %d", higmark.name, higmark.rool, higmark.marks);




  return 0;
}
