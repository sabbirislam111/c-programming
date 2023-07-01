#include<stdio.h>
int main(){
    FILE * inpFile;
    inpFile = fopen("in.txt","r");
    if(inpFile == NULL){
        printf("Not Found");
        return 0;
    }

    int count = 0;
   while(1){
    char ch = fgetc(inpFile);

    if(ch == EOF){
        break;
    }
    count++;
   }
    printf("%d", count-1);



//    int a, b;
//    fscanf(inpFile,"%d %d", &a, &b);
//
//
//    int sum = a+b;
//    printf("sum = %d", sum);





 return 0;
}
