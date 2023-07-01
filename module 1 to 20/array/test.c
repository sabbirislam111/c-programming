 #include <stdio.h>
 #include<string.h>
 int main()
 {
    char a[] = "apple";
    char b[] = "banana";

    int com = strcmp(a, b);
    if(com < 0){
        printf("a is small");
    }
    else if(a == 0){
        printf("Equal");
    }
    else{
        printf("b is small");
    }


return 0;
 }
