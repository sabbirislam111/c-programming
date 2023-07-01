#include<stdio.h>
#include<stdbool.h>
int main()
{
    /////// convert form negative to positive value /////////
   /*int num;
    scanf("%d", &num);

    if(num <0){
        num = -num;
        printf("%d", num);

    }*/

    /////// convert form negative to positive value /////////

   /* int num;
    num = 0;

    bool com = num;
    printf("%d\n", com);

    if( com ){
        printf("True");
    }
    else{
        printf("false");
    }
    */
/////////////// nasted for loop 1///////////////
    /*int H, W;
    scanf("%d %d", &H, &W);


    for(int i = 1; i < W; i++){
        printf("*");
    }
    printf("\n");


     for(int x = 0; x < H-2; x++){
        printf("*");
        for(int j = 1; j <W-2; j++){
           printf(" ");
        }
        printf("*");
        printf("\n");
     }




      for(int i = 1; i < W; i++){
        printf("*");
    }*/
/////////////// nasted for loop 1///////////////


/////////////// nasted for loop 2///////////////
    /*int n;
    scanf("%d", &n);


    for(int row = 1; row <=n; row++){
        //printf("%d\n",i);
        for(int col = 1; col <=n; col++){
            printf("%d\t", row*col);
        }
        printf("\n");
    }*/


/////////////// nasted for loop 2///////////////
/*int count = 0;
for(int i = 5; i <= 10; i++){
    printf("%d ", i);
    count++;
}
printf("count = %d", count);*/

for (int i=0; i<3; i++) {
    	for (int j=0; j<5; j++) {
        	printf("*");
    	}
    	printf("\n");
	}



return 0;
}
