#include<stdio.h>
#include<string.h>
int main(){
  int isSpaceFound = 0;
  int i = 0;
  char name[1000];
  gets(name);


  int len = strlen(name);

    if(name[0] >= 'a' && name[0] <='z'){
      name[0]=name[0]-'a'+'A';
    }

    while(i < len){
        if(name[i] ==' '){
            isSpaceFound = 1;
        }
        else if(name[i] >= 'a' && name[i] <='z' && isSpaceFound){
            name[i] = name[i] -'a' +'A';
            isSpaceFound = 0;
        }
        i++;
    }
    printf("%s", name);

 return 0;
}

