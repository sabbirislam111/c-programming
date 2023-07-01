#include<stdio.h>

int calcAria(int widtd, int height){
    int area = widtd * height;
    printf("%d", area);
    //return area;


}


int main()
{
    int width, height;
    scanf("%d %d", &width, &height);
    calcAria(width, height);



 return 0;
}
