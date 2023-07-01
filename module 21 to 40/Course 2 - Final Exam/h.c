#include<stdio.h>
#include<string.h>
int main(){

    char string[100];
    gets(string);
    int n = strlen(string);
    int count = 0;

   for(int i = 0; i < n; i++){
    if(string[i] == '1' || string[i] == '2' || string[i] == '3'){
    int l, j;

   for (l = 0; l < n-1; l++) {
      for (j = i+1; j < n; j++) {
         if (string[l] > string[j]) {
           int temp = string[l];
            string[l] = string[j];
            string[j] = temp;
         }
      }
   }

    }
   }


    for(int val = 0; val < n; val++){
          if(string[val] == '1'){
            printf("1");
            if(val < n-1){
                printf("+");
            }
          }
          else if(string[val] == '2'){
                printf("2");
            if(val < n-1){
                printf("+");
            }
          }
          else if(string[val] == '3'){
                printf("3");
                if(val < n-1){
                printf("+");
            }
          }

    }



 return 0;
}
