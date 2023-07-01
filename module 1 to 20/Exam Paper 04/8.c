#include <stdio.h>
#include<string.h>

char stringCat(char a[], char b[], char *out[]){
    int i = 0, j = 0, len = 0;

    while(a[i] != '\0'){
      i++;
      len++;
    }

     while(a[j] != '\0'){
       a[len + j] = b[j];
       *out = a[len + j];
        j++;

    }
    return out;

//    *out = strcat(a, b);
//    return out;

}

int main() {
  char s1[100] = "Sabbir", s2[] = " Mollah", out[100];
  stringCat(s1, s2, &out);
  printf("%s", s1);




  return 0;
}
