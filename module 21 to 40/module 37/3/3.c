#include<stdio.h>
int main(){
FILE *inputFile;
FILE *outputFile;
inputFile = fopen("inputfile.txt","r");
if(inputFile == NULL){
    printf("No file hear");
    return 0;
}
outputFile = fopen("output.txt","w");

int n;
fscanf(inputFile,"%d",&n);
//int arr[n];
int sum = 0;
for(int i = 0; i < n; i++){
    int a;
    fscanf(inputFile,"%d",&a);
    sum += a;
}
fprintf(outputFile,"sum = %d", sum);


 return 0;
}

