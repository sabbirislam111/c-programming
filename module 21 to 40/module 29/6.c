#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    gets(name);

    char title[] = "Phitron Member ";

    strcat(title, name);
    printf("%s", title);


}
