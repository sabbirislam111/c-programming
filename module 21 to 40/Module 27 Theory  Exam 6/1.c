#include<stdio.h>
struct Time{
    int houre;
    int minute;
    int second;

};

void print(struct Time time){
    printf("%d:%d PM",time.houre, time.minute);

}

int main(){
   struct Time holds;
   holds.houre = 6;
   holds.minute = 30;
   holds.second = 00;

   print(holds);

}

