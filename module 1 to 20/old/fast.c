#include<stdio.h>
int main() {

   /* double num1, num2;
    scanf("%lf %lf", &num1, &num2);


    double jogfol = num1 + num2;
    printf("%lf + %lf = %lf\n",num1, num2, jogfol );

    double biogfol = num1 - num2;
    printf("%lf - %lf = %lf\n",num1, num2, biogfol );

    double gunfol = num1 * num2;
    printf("%lf * %lf = %lf\n",num1, num2, gunfol );

    double vagfol = num1 / num2;
    printf("%lf / %lf = %lf\n",num1, num2, vagfol ); */



    /* int num1;
    scanf("%d", &num1);


    num1 += 1;
    printf ("%d\n", num1);


    num1 ++;
    printf ("%d\n", num1);

    num1 --;
    printf ("%d", num1);*/


    ///////////// type convartion ///////////////

    /* double realnumber = 5.7676;

    printf("Number = %d",(int)realnumber);*/


    ///////////// type convartion ///////////////


    ////////////// Circle ////////////////
   /* double radius;
    printf("Enter the radius :");
    scanf("%lf", &radius);

    const double PI = 3.1416;

    double perimeter = 2 * PI *radius;
    printf("perimeter = %.2lf\n", perimeter);

    double area = PI * radius * radius;
    printf("area = %.2lf", area);*/

    ////////////// Circle ////////////////

    /*int a, b;
    int side;
	scanf("%d", &side);

	int area = 3.1416 *side * side;
	printf("Area is %d", area);
	return 0;*/

    /*int ReInitialize;
    int Calloc;
    int floating;

    int _1312;
    int _;
    int _05;
    int z;
    int A$;*/



       /* int inches;

        printf("Please enter inches:");
        scanf("%d", &inches);

        int feet = inches / 12;
        int inche = inches % 12;

        printf("%d Feet %d inche", feet, inche);*/

        /* int hight, width;
        printf("Enter the hight and width :");
        scanf("%d %d", &hight, &width);

        int area = hight * width;
        printf("Area = %d Square meters\n",area);

        int perimeter = 2 * (hight + width);
        printf("Perimeter = %d meters\n",perimeter); */

    ///////////// thxt right align //////////////////
      /* printf("%*s" ,10, "Hello\n");
       printf("%*s" ,10, "Nice\n");
       printf("%*s" ,10, "To\n");
       printf("%*s" ,10, "Meet\n");
       printf("%*s" ,10, "You\n");*/
    ///////////// thxt right align //////////////////



    /*printf("Name : sabbir\n");
    printf("DOB : 02/06/1997\n");
    printf("Mobile :01932420118");*/


    /*int num1 = 25, num2 = 15;
    int product = num1 * num2;
    printf("product = %d",product);*/


   /* int num1, num2;
    printf("Enter two numbers :");
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    printf("Sum = %d\n", sum);

   int diffarence = num1 - num2;
   printf("diffarence = %d\n",diffarence);

   int product = num1 * num2;
   printf("product = %d\n",product);

   int quotient = num1 / num2;
   printf("diffarence = %d\n",quotient);


   int modulas = num1 % num2;
   printf("modulas = %d\n",modulas);*/


   /* int princple, time;
   double rate;

   printf("Enter The P T R :");
   scanf("%d %d %lf", &princple, &time, &rate);

   double simple_interest = princple * time * rate / 100;
   printf("Simple principle = %lf", simple_interest); */



   /* float number;
   printf("enter the floating point number :");
   scanf("%f", &number);

   printf("Integer part = %d\n", (int)number);

   double Real_part = number - (int)number;
   printf("Real Number = %lf", Real_part);*/


   /*float wait1, item1, wait2, item2;
    printf("Enter the value:");
    scanf("%f %f %f %f",&wait1, &item1, &wait2, &item2);
     float value = (wait1 * item1) + (wait2 * item2);
     printf("%f\n",value);

     float avareg_value = value /(item1 + item2);
     printf("%f", avareg_value);*/


     /*int hour, salary, amount;
     printf("Enter your working hour and amount:");
     scanf("%d %d", &hour, &amount);

     salary = hour * amount;
     printf("salary = %d", salary);*/


     int day, month, year;

    printf("Enter your dath :");
    scanf("%d", &day);

    year = day / 365;
    printf("Year = %d\n", year);

    month = day % 365 / 30;
    printf("month = %d\n", month);

    day = day % 365 % 30;
    printf("day = %d", day);

}

