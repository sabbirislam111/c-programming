#include<stdio.h>
int main() {
int ch ;
scanf("%c", &ch);

int vowels = (ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'||ch == 'u' ? printf("Vowels\n") : printf("Consonants\n"));
printf("%d", vowels);


}

