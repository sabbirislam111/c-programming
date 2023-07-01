#include<bits/stdc++.h>
using namespace std;

int main(){


int weeks = 2, days_in_week = 7;
int i = 1;

do {
    cout<<"Week: "<<i<<endl;
    int j = 1;

    do {
        if(i%2 == 0){
            if(j%2 == 0) cout<<"Day: "<<j<<" ";
        }
        else{
            if(j%2 != 0) cout<<"Day: "<<j <<" ";
        }
        j++;
    } while(j <= days_in_week);

    cout<<endl;
    i++;
} while(i <= weeks);

 return 0;
}





              2
            4 6 4
          6 8 10 8 6
      8 10 12 14 12 10 4
  10 12 14 16 18 16 14 12 10

