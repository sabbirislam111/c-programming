

#include<stdio.h>
int main()
{
    ////////////// scanf()//////////

    /* float num1, num2;
    printf("Enter your floting number :");
    scanf("%f %f",&num1, &num2);
    printf("%.1f, %.1f",num1, num2);*/




   /* printf("Enter the first number :");
    scanf("%d %d",&num1, &num2);
    printf("%d %d\n", num1, num2);*/

    /* printf("Enter the second number :");
    scanf("%d",&num2);
    printf("%d\n", num2); */

    ////////////// scanf()//////////


    ////////////////  Ascii character///////////////

    //number to ascii character
      /* int n;
    printf("Enter any number :");
    scanf("%d", &n);
    printf("the ascii character : %c",n);*/


    //ascii character to number
    /*  char ch;
    printf("Enter any number :");
    scanf("%c", &ch);
    printf("the ascii character : %d",ch);*/


    ////////////////  Ascii character///////////////


    /////////////////// Lower case to uppercase////////////

    // lower to uppre case
    /*char lowchar;
    printf("Enter the lower case character :");
    scanf("%c", &lowchar);

    printf("The uppercase letter :%c",lowchar-32);*/


    //upper to lowercase

     /*char upper;
    printf("Enter the upper case character :");
    scanf("%c", &upper);

    printf("The lower letter :%c",upper+32);*/


    /////////////////// Lower case to uppercase////////////


    ///////////// low to up librarry function ///////////////////

    // upper to lower
    /*char upper, lower;
    printf("Enter the Upper case leter :");
    scanf("%c", &upper);
    lower = tolower(upper);
    printf("the lower case leter :%c",lower);*/

    //upper to lower
    /*char upper, lower;
    printf("Enter the lower case leter :");
    scanf("%c", &lower);
    upper = toupper(lower);
    printf("the lower case leter :%c",upper);*/

     ///////////// low to up librarry function ///////////////////


     ///////////////////////// decemal to octal //////////////////////////

    /*char number;
     printf("Enter your decemal number:");
     scanf("%d", &number);
     printf("Octal number is :%o",number);*/


      ///////////////////////// decemal to octal //////////////////////////



      ///////////////// decimal to hexa-decimal //////////////////

      /* char number;
     printf("Enter your decemal number:");
     scanf("%d", &number);
     printf("hexa decimal number is :%x",number);*/



     ///////////////// decimal to hexa-decimal //////////////////


     ///////////////// Arithmatic operator ///////////////////////

     /* int num1, num2, sum;
      float avg;
     printf("Enter two number: ");
     scanf("%d %d", &num1, &num2);

     sum = num1 + num2;
     printf("The sum is : %d\n", sum);

     avg =(float)sum / 2;// Type casting
     printf("Average value is %f\n",avg);*/



    ///////////////// Arithmatic operator ///////////////////////


    ////////////////////// calculate tringle ///////////////////

    float base, area;
    printf("Enter the base :");
    scanf("%f",&base);

    float hight;
    printf("Enter the hight :");
    scanf("%f",&hight);

    area = (float)1/2 * base * hight;
    printf("The area = %.2f", area);










    ////////////////////// calculate tringle ///////////////////



}
