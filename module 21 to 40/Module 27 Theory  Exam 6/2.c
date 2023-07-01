#include<stdio.h>

struct Time{
    int houre;
    int minute;
    int second;

};

struct Interval{
    struct Time start;
    struct Time end;
};

struct Time inputTime()
{
    struct Time time;
    time.houre = 6;
    time.minute = 30;
    time.second = 00;

//    time.houre = 10;
//    time.minute = 15;
//    time.second = 00;
    return time;

}
struct Interval inputIntervel(){
    struct Interval time;
   time.start = inputTime(time.start);
   time.end = inputTime(time.end);

    return time;
}

void printTime(struct Time start, struct Time end){
    printf("Start = %d:%d:%d",start.houre, start.minute, start.second);
    printf("\n");
    printf("End = %d:%d:%d",end.houre, end.minute, end.second);

}

void printIntervel(struct Interval start, struct Interval end){
    printTime(start.start, end.end);

}


int main(){


   struct Interval start, end;
   inputIntervel(start, end);
    printIntervel(start, end);


}
