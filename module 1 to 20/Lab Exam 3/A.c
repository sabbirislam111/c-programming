
#include<stdio.h>
#include<string.h>
int count_unique_char(char* str) {

	int hash[128] = { 0 };
	int i, c = 0;
	for (i = 0; i < strlen(str); ++i) {
		hash[str[i]] = 1;
		printf("%c %d \n",str[i], hash[str[i]]);
	}
	for (i = 0; i < 128; ++i) {
		c += hash[i];

	}

	for (i = 0; i < 128; ++i) {
		 printf(" %d \n",hash[i]);

	}

	//return c;

}
int main(){
    char name[300];
    gets(name);// end new line
    int size= count_unique_char(name);
    if(size % 2==0 ){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
}
